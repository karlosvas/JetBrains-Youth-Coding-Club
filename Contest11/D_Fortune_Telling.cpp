#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> latest;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        latest.push_back(a);
        total += a;
    }

    if (total % 2 == 1) {
        cout << total << "\n";
        return 0;
    }

    sort(latest.begin(), latest.end());
    for (int value : latest) {
        if ((total - value) % 2 == 1) {
            cout << total - value << "\n";
            return 0;
        }
    }

    cout << "0\n";

    return 0;
}