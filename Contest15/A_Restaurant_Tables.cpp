#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;

    long long denied = 0;
    long long shared = 0;

    for (int i = 0; i < n; i++) {
        long long yo;
        cin >> yo;
        if (yo == 1) {
            if (a > 0) {
                a--;
            } else if (b > 0) {
                b--;
                shared++;
            } else if (shared > 0) {
                shared--;
            } else {
                denied++;
            }
        } else {
            if (b > 0) {
                b--;
            } else {
                denied += 2;
            }
        }
    }

    cout << denied << "\n";
    return 0;
}