#include <bits/stdc++.h>
using namespace std;

int main() {
    // Celdas, indice
    int n, t;
    cin >> n >> t;

    bool finish = false;
    int actualUser = 1;
    for (int i = 1; i < n && !finish; i++) {
        int a;
        cin >> a;

        // Ahora el usuario salta a, donde estaba mas el yo_a
        if (i == actualUser)
            actualUser += a;

        // Encontro el nodo necesario
        if (actualUser == t)
            finish = true;
    }

    (finish) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}