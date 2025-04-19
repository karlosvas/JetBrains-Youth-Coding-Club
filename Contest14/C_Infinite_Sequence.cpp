#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (c == 0) {
        cout << (a == b ? "YES" : "NO") << endl;
        return 0;
    }

    if ((b - a) % c == 0) {
        long long i = (b - a) / c + 1;
        if (i > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}