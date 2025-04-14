#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string line;
        cin >> line;

        if (line.size() % 2 == 1) {
            cout << "NO\n";
        } else {
            int idkn = 0, open = 0, close = 0;

            for (char c : line) {
                if (c == '?') {
                    idkn++;
                } else if (c == ')') {
                    close++;
                } else if (c == '(') {
                    open++;
                }
            }

            // Faltan diff para que esten parejos
            int diff = abs(open - close);

            // Si tengio suficientes ? para emparejarlos
            if (idkn >= diff) {
                idkn -= diff;  // emparejados
            }

            // Si ya nmo hay mas 0, o alguna pareja mas * de 2
            if (idkn % 2 == 0 && line[0] != ')' && line[line.size() - 1] != '(') {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    };

    return 0;
}