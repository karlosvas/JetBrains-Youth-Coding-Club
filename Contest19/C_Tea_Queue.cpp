#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        int currentTime = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            // Legada(l), espera maxima(r)
            int l, r;
            cin >> l >> r;

            if (i != 0)
                cout << " ";

            if (currentTime < l) {
                cout << l;
                // Proximo valor de time
                currentTime = l + 1;
            } else {
                // Son iguales vemos si puede esperar
                if (r < currentTime) {
                    cout << 0;
                } else {
                    // Si si se puede esperar lo cojemos en el momento en que esta libre
                    // Y el siguiente sera el momento en que lo podemos cojer
                    cout << currentTime;
                    currentTime = currentTime + 1;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}