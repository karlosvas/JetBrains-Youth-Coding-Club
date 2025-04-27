#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string res = "hello";
    int pointer = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == res[pointer]) {
            pointer++;
            if (pointer == res.size()) break;
        }
    }

    cout << ((pointer == res.size()) ? "YES\n" : "NO\n");

    return 0;
}