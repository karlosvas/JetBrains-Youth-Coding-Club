#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'H' || s[i] == '9' || s[i] == 'Q') {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}