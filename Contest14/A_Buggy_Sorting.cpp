#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 2) {
        cout << "-1\n";
        return 0;
    }

    cout << n << " " << n - 1;
    for (int i = n - 2; i > 0; i--) {
        cout << " " << i;
    }
    cout << "\n";

    return 0;
}