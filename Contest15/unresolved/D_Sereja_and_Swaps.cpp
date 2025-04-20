#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int maxN = 0;
    priority_queue<int, vector<int>, greater<int>> negativos;
    int neg = 0;
    bool ceros = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a >= 0) {
            maxN += a;
            if (a == 0) ceros = true;
        } else {
            if (k > 0)
                k--;
            else
                neg++;
            negativos.push(a);
        }
    }

    while (maxN == 0 && !negativos.empty()) {
        // No ha habido positivos asique mostramos el menor negativo, el ultimo
        if (negativos.size() == 1) {
            cout << ((ceros) ? 0 : negativos.top()) << "\n";
            return 0;
        }
        negativos.pop();
    }

    while (neg-- && !negativos.empty()) {
        maxN += negativos.top();
        negativos.pop();
    }

    // Si no ha habido positivos mostramos el menor de todos
    cout << maxN << "\n";
    return 0;
}