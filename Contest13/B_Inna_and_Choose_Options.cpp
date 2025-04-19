#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    // Posibles combinaciones a×b donde a·b = 12
    vector<pair<int, int>> options = {{1, 12}, {2, 6}, {3, 4}, {4, 3}, {6, 2}, {12, 1}};

    while (t--) {
        string cards;
        cin >> cards;

        vector<string> validOptions;

        for (auto [a, b] : options) {
            // Verificar si con esta configuración a×b se puede ganar
            bool canWin = false;

            // Verificar cada columna
            for (int col = 0; col < b; col++) {
                bool allX = true;

                // Verificar si toda la columna tiene 'X'
                for (int row = 0; row < a; row++) {
                    int pos = row * b + col;  // Posición en la cadena original
                    if (cards[pos] != 'X') {
                        allX = false;
                        break;
                    }
                }

                if (allX) {
                    canWin = true;
                    break;
                }
            }

            if (canWin)
                validOptions.push_back(to_string(a) + "x" + to_string(b));
        }

        cout << validOptions.size();
        for (const string& option : validOptions) {
            cout << " " << option;
        }
        cout << "\n";
    }

    return 0;
}