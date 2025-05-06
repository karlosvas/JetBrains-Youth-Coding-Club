#include <bits/stdc++.h>

#include <cctype>
#include <string>
using namespace std;

const string vocal = "AEIOUY";
int main() {
    string s;
    getline(cin, s);

    for (int i = s.size() - 1; i >= 0; i--) {
        char c = toupper(s[i]);
        if (isalpha(c)) {
            (vocal.find(c) != string::npos) ? cout << "YES\n"
                                            : cout << "NO\n";
            return 0;
        }
    }

    return 0;
}