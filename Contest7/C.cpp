#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int limpiaPlatos = 0;
    int limpiaCuencos = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >>a;
        if (a == 1) {
            if (m > 0)
                m--; 
            else
                limpiaCuencos++;
        } else {
            if (k > 0)
                k--; 
            else if (m > 0) 
                m--; 
            else 
                limpiaPlatos++; 
        }
    }

    cout << limpiaCuencos + limpiaPlatos << endl;

    return 0;
}