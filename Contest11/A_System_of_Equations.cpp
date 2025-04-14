#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int countPairs = 0;
    for (int a = 0; a * a <= n; a++) {
        int b = n - a * a;
        if (b >= 0 && a + b * b == m)
            countPairs++;
    }
    cout << countPairs << "\n";
    return 0;
}