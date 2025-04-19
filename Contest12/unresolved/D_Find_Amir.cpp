#include <bits/stdc++.h>
using namespace std;

// Memory limit exceeded on test 3
int main() {
    int n;
    cin >> n;

    vector<vector<pair<int, int>>> v(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            int peso = ((i + 1) + (j + 1)) % (n + 1);
            v[i].push_back({j, peso});
            v[j].push_back({i, peso});
        }
    }

    // Encontrar el árbol de expansión mínima (MST) usando Prim
    vector<bool> visited(n, false);
    vector<int> key(n, 1e9);
    key[0] = 0;         // Nodo inicial
    int totalCost = 0;  // Costo total del MST

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});  // {peso, nodo}

    while (!pq.empty() && count(visited.begin(), visited.end(), true) < n) {
        int u = pq.top().second;
        int weight = pq.top().first;
        pq.pop();

        if (visited[u]) continue;

        visited[u] = true;
        totalCost += weight;

        for (auto &[v, w] : v[u]) {
            if (!visited[v] && w < key[v]) {
                key[v] = w;
                pq.push({key[v], v});
            }
        }
    }

    cout << totalCost << "\n";
    return 0;
}