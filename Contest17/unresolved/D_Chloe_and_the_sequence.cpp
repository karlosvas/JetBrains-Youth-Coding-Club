#include <bits/stdc++.h>
using namespace std;

// Memory limit exceeded on test 7
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        vector<int> backup;
        backup = v;
        v.push_back(i);
        for (int x : backup) {
            v.push_back(x);
        }
        if (v.size() == m) break;
    }

    cout << v[m - 1] << "\n";

    return 0;
}