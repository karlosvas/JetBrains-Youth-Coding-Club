#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<long long, long long> m;
    vector<long long> v(n);
    long long count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i] = x;
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < v.size(); i++) {
        long long x = v[i];
        if (m[x] == 0) {
            m[x]++;
            count += x;
        } else {
            while (x > 0) {
                x--;
                if (m[x] == 0) {
                    m[x]++;
                    count += x;
                    break;
                }
            }
        }
    }

    cout << count << "\n";

    return 0;
}