#include <bits/stdc++.h>
using namespace std;

void solve() {
}

int main() {
    int n;
    cin >> n;
    set<char> pila;

    bool perfect = true;
    char diagonal;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (i == 0) diagonal = s[0];
        int j = s.size() - i - 1;

        for (int k = 0; k < s.size(); k++) {
            pila.insert(s[k]);
            if (k == i || k == j) continue;
            if (diagonal == s[k]) {
                cout << "NO\n";
                return 0;
            }
        }

        if (s[i] != s[j] || s[i] != diagonal || s[j] != diagonal) {
            cout << "NO\n";
            return 0;
        }
    }

    if (pila.size() != 2)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}