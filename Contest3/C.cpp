#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int sol = INT_MAX;
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) {
            int diff = abs(v[i] - v[i - 1]);
            if (diff < sol) {
                sol = diff;
                count = 1;
            } else if (diff == sol) {
                count++;
            }
        }
    }

    cout << sol << " " << count << "\n";
    return 0;
}