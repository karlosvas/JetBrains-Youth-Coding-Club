#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b, p;  // Numero e participantes n, bollettas b. toallas p
    cin >> n >> b >> p;

    int towels = n * p;
    int bottles = (2 * b + 1) * (n - 1);

    cout << bottles << " " << towels << endl;
    return 0;
}