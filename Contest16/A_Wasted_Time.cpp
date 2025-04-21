#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, k;
    cin >> n >> k;

    double acumulatedDist = 0;
    int x1, y1;
    cin >> x1 >> y1;
    for (int i = 0; i < n - 1; i++) {
        double x2, y2;
        cin >> x2 >> y2;
        double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        acumulatedDist += distancia;
        x1 = x2;
        y1 = y2;
    }

    cout << fixed << setprecision(9) << (acumulatedDist * k) / 50 << "\n";
    return 0;
}