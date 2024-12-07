#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> grifos(k);
    vector<int> tiempo(n, INT_MAX);
    queue<int> q;

    for (int i = 0; i < k; i++) {
        cin >> grifos[i];
        grifos[i]--; // Convertir a índice 0
        q.push(grifos[i]);
        tiempo[grifos[i]] = 0;
    }

    int maxTiempo = 0;
    while (!q.empty()) {
        int actual = q.front();
        q.pop();
        int t = tiempo[actual];

        if (actual > 0 && tiempo[actual - 1] > t + 1) {
            tiempo[actual - 1] = t + 1;
            q.push(actual - 1);
        }
        if (actual < n - 1 && tiempo[actual + 1] > t + 1) {
            tiempo[actual + 1] = t + 1;
            q.push(actual + 1);
        }

        maxTiempo = max(maxTiempo, t);
    }

    cout << maxTiempo + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}