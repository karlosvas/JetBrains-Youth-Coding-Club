#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  // Cantidad de camellos
    cin >> n;

    map<int, pair<int, int>> m;
    while (n--) {
        int x, d;
        cin >> x >> d;
        m[x + d].first++;
        m[x + d].second = x;

        // Si al actual le han escupido vemos a ver si es el mismo que escupimos nosotros
        if (m[x].first != 0 && m[x].second == x + d) {
            cout << "YES\n";
            return 0;
        }
    };

    cout << "NO\n";

    return 0;
}