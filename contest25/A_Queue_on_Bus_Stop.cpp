#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int buses = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (sum + a > m) {
            buses++;
            sum = 0;
        }
        sum += a;
    }

    if (sum > 0) buses++;
    cout << buses << "\n";

    return 0;
}