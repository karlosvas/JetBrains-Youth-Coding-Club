#include <bits/stdc++.h>
using namespace std;

// Wrong Answer on test 11
int main() {
    // Matriz
    int a, b;
    cin >> a >> b;

    // Frirst color
    int a1, b1;
    cin >> a1 >> b1;

    int ny = a - a1;
    int nx = b - b1;

    // Secound color
    int a2, b2;
    cin >> a2 >> b2;

    if (ny < a2 && nx < b2) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
    return 0;
}