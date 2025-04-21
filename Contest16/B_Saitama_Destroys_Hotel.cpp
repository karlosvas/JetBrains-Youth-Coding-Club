#include <bits/stdc++.h>
using namespace std;

int main() {
    // Pasajeros(n) piso superior(s)
    int n, s;
    cin >> n >> s;

    // Cola de prioridad
    priority_queue<pair<int, int>> pq;

    // Piso actual empieza siendo el mas grande
    int currentPiso = s;
    // Añadimos el ultimo y primer piso
    for (int i = 0; i < n; i++) {
        // Piso(f) hora en segundos(t)
        int f, t;
        cin >> f >> t;
        pq.push({f, t});
    }

    int segundos = 0;
    while (!pq.empty()) {
        // Piso tiempo de espera
        auto [f, t] = pq.top();
        pq.pop();

        int diffPisos = abs(currentPiso - f);
        currentPiso = f;
        // Desde 0 a dos pasan 2 segundos
        segundos += diffPisos;

        // La espera es lo que no ha costado llegar desde el piso en el que estabamos - lo segundos pasados
        int e = t - segundos;
        segundos += (e >= 0) ? e : 0;
    }

    segundos += abs(currentPiso - 0);
    cout << segundos << "\n";

    return 0;
}