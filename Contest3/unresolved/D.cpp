#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;  // Aeropuertos, origen destino
    cin >> n >> a >> b;
    a--;
    b--;

    // 0 -> fist company, 1 -> secound
    string x;
    cin >> x;

    if (x[a] == x[b]) {
        cout << "0\n";
    } else {
        if (x[a] == '1') {
            size_t pos = x.find('0', a + 1);
            size_t posStart = x.find('0', 0);
            if (pos == string::npos) pos = posStart;
            if (posStart == string::npos) posStart = pos;
            if (pos == string::npos && posStart == string::npos) {
                cout << abs(a - b) << "\n";
            }
            cout << min(abs((int)a - (int)pos), abs((int)a - (int)posStart)) << "\n";
        } else {
            size_t pos = x.find('1', a + 1);
            size_t posStart = x.find('1', 0);
            if (pos == string::npos) pos = posStart;
            if (posStart == string::npos) posStart = pos;
            if (pos == string::npos && posStart == string::npos) {
                cout << abs(a - b) << "\n";
            }
            cout << min(abs((int)a - (int)pos), abs((int)a - (int)posStart)) << "\n";
        }
    }

    return 0;
}