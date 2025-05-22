#include <bits/stdc++.h>
using namespace std;

bool solve() {
    vector<int> sticks(4);
    for (int i = 0; i < 4; i++) {
        cin >> sticks[i];
    }

    sort(sticks.begin(), sticks.end());

    for (int i = 0; i < 2; i++) {
        if (sticks[i] + sticks[i + 1] > sticks[i + 2]) {
            cout << "TRIANGLE\n";
            return false;
        }
    }

    for (int i = 0; i < 2; i++) {
        if (sticks[i] + sticks[i + 1] == sticks[i + 2]) {
            cout << "SEGMENT\n";
            return false;
        }
    }

    cout << "IMPOSSIBLE\n";
    return false;
}

int main() {
    while (solve());
    return 0;
}