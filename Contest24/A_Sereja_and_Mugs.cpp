#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
        sum += a[i];

    if (sum <= s)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}