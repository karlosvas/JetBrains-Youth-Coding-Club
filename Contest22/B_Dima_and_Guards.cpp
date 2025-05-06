#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 4; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Prueba todas las combinaciones posibles
        // Chocolate para ambas guardias
        if (a + c <= n) {
            cout << i + 1 << " " << a << " " << (n - a) << "\n";
            return 0;
        }

        // Chocolate para guardia 1, jugo para guardia 2
        if (a + d <= n) {
            cout << i + 1 << " " << a << " " << (n - a) << "\n";
            return 0;
        }

        // Jugo para guardia 1, chocolate para guardia 2
        if (b + c <= n) {
            cout << i + 1 << " " << b << " " << (n - b) << "\n";
            return 0;
        }

        // Jugo para ambas guardias
        if (b + d <= n) {
            cout << i + 1 << " " << b << " " << (n - b) << "\n";
            return 0;
        }
    }

    cout << "-1\n";
    return 0;
}