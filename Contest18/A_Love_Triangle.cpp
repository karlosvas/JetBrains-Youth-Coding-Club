#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++) {
        int a = v[i];
        int b = v[a];
        int c = v[b];
        if (i == c && i != a && a != b && b != c) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}