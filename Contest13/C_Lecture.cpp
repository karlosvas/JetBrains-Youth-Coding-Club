#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<string, string> letters;
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        if (b.size() < a.size())
            letters[a] = b;
        else
            letters[a] = a;
    }

    for (int i = 0; i < n; i++) {
        string contest;
        cin >> contest;
        if (i == 0)
            cout << letters[contest];
        else
            cout << " " << letters[contest];
    }

    cout << "\n";

    return 0;
}