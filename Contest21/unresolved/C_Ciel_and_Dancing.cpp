#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // chicos(n) chicas(m)
    map<pair<int, int>, bool> pairs;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!pairs[{i + 1, j + 1}] && !pairs[{j + 1, i + 1}]) {
                pairs[{i + 1, j + 1}] = true;
                count++;
            }
        }
    }

    cout << count << "\n";
    for (auto pair : pairs) {
        if (pair.second)
            cout << pair.first.first << " " << pair.first.second << "\n";
    }

    return 0;
}