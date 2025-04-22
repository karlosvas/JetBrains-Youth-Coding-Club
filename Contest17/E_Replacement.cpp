#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int sol = 0;
    for (int j = 0; j < s.size() - 1; j++) {
        if (s[j] == s[j + 1] && s[j] == '.') {
            sol++;
        }
    }

    for (int i = 0; i < m; i++) {
        int index;
        char str;
        cin >> index;
        cin >> str;
        index--;

        // Vemos como afecta quitarlo
        if (s[index] == '.') {
            if (index < n - 1 && s[index + 1] == '.')
                sol--;
            if (index > 0 && s[index - 1] == '.')
                sol--;
        }

        // Vemos como afecta aádirlo
        s[index] = str;
        if (s[index] == '.') {
            if (index < n - 1 && s[index + 1] == '.')
                sol++;
            if (index > 0 && s[index - 1] == '.')
                sol++;
        }

        cout << sol << "\n";
    }

    return 0;
}