#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> found(n + 1, false);

    int valid_count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x >= 1 && x <= n && !found[x]) {
            found[x] = true;
            valid_count++;
        }
    }

    cout << n - valid_count << "\n";

    return 0;
}