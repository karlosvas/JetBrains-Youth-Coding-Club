#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> columns(n);

    for (int i = 0; i < n; i++)
        cin >> columns[i];

    sort(columns.begin(), columns.end());

    for (int i = 0; i < n; i++) {
        cout << columns[i];
        if (i < n - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}