#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
    }

    int maxSol = 0;
    string sol = "";
    for (auto [key, value] : m) {
        if (value > maxSol) {
            maxSol = value;
            sol = key;
        }
    }

    cout << sol << "\n";
    return 0;
}