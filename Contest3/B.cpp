#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    int count = 1;
    for (int i = 1, j = n; i < n && j >= 2; i += 2, j -= 2) {
        if (i == a || j == a) {
            cout << count << "\n";
            return 0;
        }
        count++;
    }

    return 0;
}