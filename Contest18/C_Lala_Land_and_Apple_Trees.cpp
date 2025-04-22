#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll collector(const vector<ll> &A, const vector<ll> &B) {
    int i = 0, j = 0, dir = 0;
    ll sum = 0;
    while (true) {
        if (dir == 0) {
            if (i >= A.size()) break;
            sum += A[i++];
        } else {
            if (j >= B.size()) break;
            sum += B[j++];
        }
        dir ^= 1;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, ll>> pos, neg;
    for (int i = 0; i < n; i++) {
        int x;
        ll a;
        cin >> x >> a;
        if (x > 0)
            pos.emplace_back(x, a);
        else
            neg.emplace_back(x, a);
    }

    sort(pos.begin(), pos.end(), [](auto &L, auto &R) {
        return L.first < R.first;
    });
    sort(neg.begin(), neg.end(), [](auto &L, auto &R) {
        return L.first > R.first;
    });

    vector<ll> A, B;
    for (auto &p : pos) A.push_back(p.second);
    for (auto &p : neg) B.push_back(p.second);

    ll ans = max(collector(A, B), collector(B, A));
    cout << ans << "\n";
    return 0;
}
