#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Si solo hay 2 islas, siempre es posible
    if (n == 2) {
        cout << "YES\n";
        return 0;
    }

    vector<int> a, b;
    // Leer el arreglo actual y guardar todo aquel que no es 0
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x != 0) a.push_back(x);
    }

    // Leer el arreglo deseadoy y guardar todo aquel que no es 0
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x != 0) b.push_back(x);
    }

    // Verificar si b es una rotación cíclica de a
    bool is_rotation = false;
    for (int i = 0; i < n - 1; i++) {
        bool match = true;

        for (int j = 0; j < n - 1; j++) {
            if (a[(j + i) % (n - 1)] != b[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            is_rotation = true;
            break;
        }
    }

    cout << (is_rotation ? "YES\n" : "NO\n");
    return 0;
}