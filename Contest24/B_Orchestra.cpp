#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c, n, k;
    cin >> r >> c >> n >> k;

    vector<pair<int, int>> violas(n);
    for (int i = 0; i < n; ++i) {
        cin >> violas[i].first >> violas[i].second;
    }

    int ans = 0;
    // Enumerar todos los rectángulos posibles
    for (int x1 = 1; x1 <= r; ++x1) {
        for (int y1 = 1; y1 <= c; ++y1) {
            for (int x2 = x1; x2 <= r; ++x2) {
                for (int y2 = y1; y2 <= c; ++y2) {
                    int count = 0;
                    // Contar violas dentro del rectángulo
                    for (auto &v : violas) {
                        if (x1 <= v.first && v.first <= x2 && y1 <= v.second && v.second <= y2) {
                            ++count;
                        }
                    }
                    if (count >= k) ++ans;
                }
            }
        }
    }
    cout << ans << "\n";
    return 0;
}