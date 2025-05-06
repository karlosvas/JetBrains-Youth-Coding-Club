#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 2) {
        cout << n << "\n";
        return 0;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int current_length = 2;
    int max_length = 2;

    for (int i = 2; i < n; i++) {
        if (v[i] == v[i - 1] + v[i - 2]) {
            current_length++;
            max_length = max(max_length, current_length);
        } else {
            current_length = 2;
        }
    }

    cout << max_length << "\n";
    return 0;
}