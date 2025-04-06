#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    vector<double> a(n);
    double sum = 0;
    double mx = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }

    double x = (sum + b) / n;
    if (x < mx) {
        cout << -1 << "\n";
        return 0;
    }

    cout << fixed << setprecision(6);
    for (int i = 0; i < n; i++) {
        cout << (x - a[i]) << "\n";
    }

    return 0;
}