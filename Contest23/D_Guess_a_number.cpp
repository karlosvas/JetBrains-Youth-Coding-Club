#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long l = -2LL * 1000000000LL;
    long long r = 2LL * 1000000000LL;

    for (int i = 0; i < n && l + 1 < r; i++) {
        string s;
        cin >> s;
        int num;
        cin >> num;
        char response;
        cin >> response;

        if (response == 'Y') {
            if (s == ">=") {
            } else if (s == ">") {
            } else if (s == "<") {
            } else if (s == "<=") {
            }
        } else {
            if (s == ">=") {
            } else if (s == ">") {
            } else if (s == "<") {
            } else if (s == "<=") {
            }
        }
    }

    cout << l << "\n";

    return 0;
}