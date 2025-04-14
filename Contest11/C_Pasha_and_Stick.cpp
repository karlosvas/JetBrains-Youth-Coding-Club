#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Quiere realizar tres cortes para obtener 4 partes
    // Deve ser un entero positivo y la suma = n
    // cuántas maneras hay de dividir un palo en cuatro
    // partes para que sea posible formar un rectángulo
    // usando estas partes, pero es imposible formar un cuadrado.return 0;
    // n debe ser par, ya que n = 2*(x+y)
    if (n % 2 != 0) {
        cout << 0 << "\n";
        return 0;
    }

    long long s = n / 2;  // s = x + y
    // Se necesita que s >= 3, y la cantidad de pares válidos es floor((s-1)/2)
    cout << ((s > 2) ? (s - 1) / 2 : 0) << "\n";
    return 0;
}