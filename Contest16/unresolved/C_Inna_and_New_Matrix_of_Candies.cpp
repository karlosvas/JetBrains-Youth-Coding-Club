#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Máxima distancia
    int maxDist = INT_MAX;
    int minSol = INT_MAX;

    for (int i = 0; i < n; i++) {
        string personaje;
        cin >> personaje;

        bool finded = false;
        // Recorremos el string
        for (int j = 0; j < m; j++) {
            // Adelante
            // Si encuentra alguna G enano
            if (personaje[j] == 'G') {
                // Atras
                int k = j + 1;
                while (k < m && !finded) {
                    if (personaje[k] == 'S') {
                        minSol = min(minSol, abs(j - k));
                        finded = true;
                    }
                    k++;
                }

                // Distancia desde el ultimo al S
                // Si la distancia de S es mayor que la distancia de G llendo hacia la derecha toca la pared
                if (finded) {
                    maxDist = min(maxDist, abs(m - k));
                    // Distancia desde el S al G, solo si el enano esta a la izquierda de el caramelo puede cojerlo porque se va moviendo a la derecha
                    maxDist = min(maxDist, abs(k - j));
                }
                break;
            }
        }
    }

    if (minSol != INT_MAX && minSol >= maxDist) {
        cout << minSol << "\n";
    } else {
        cout << -1 << "\n";
        return 0;
    }

    return 0;
}