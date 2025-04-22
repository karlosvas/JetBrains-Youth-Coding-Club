#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string sol = "";
    int currentSum = 0;
    bool isCero = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            sol += to_string(currentSum);
            currentSum = 0;
        } else {
            currentSum++;
        }
    }

    sol += to_string(currentSum);
    cout << sol << "\n";

    return 0;
}