#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long current_day = 0;

    for (int i = 0; i < n; i++) {
        long long s, d;
        cin >> s >> d;

        if (current_day < s) {
            current_day = s;
        } else {
            while (current_day >= s)
                s += d;
            current_day = s;
        }
    }

    cout << current_day << "\n";

    return 0;
}