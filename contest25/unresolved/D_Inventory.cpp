#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> entrada(n);
    set<int> usados;
    priority_queue<int, vector<int>, greater<int>> noAparece;
    for (int i = 0; i < n; i++) {
        cin >> entrada[i];
        noAparece.push(i + 1);
    }

    for (int i = 0; i < n; i++) {
        int x = entrada[i];
        if (x >= 1 && x <= n && usados.count(x) == 0) {
            cout << x << " ";
            usados.insert(x);
        } else {
            while (usados.count(noAparece.top()))
                noAparece.pop();
            cout << noAparece.top() << " ";
            usados.insert(noAparece.top());
            noAparece.pop();
        }
    }
    cout << "\n";
    return 0;
}