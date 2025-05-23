#include <bits/stdc++.h>
using namespace std;

int main() {
    int ninio, ninia;
    cin >> ninio;
    vector<int> v(ninio);
    for (int i = 0; i < ninio; i++)
        cin >> v[i];

    cin >> ninia;
    vector<int> m(ninia);
    for (int i = 0; i < ninia; i++)
        cin >> m[i];

    sort(v.begin(), v.end());
    sort(m.begin(), m.end());

    int sol = 0;
    int i = 0, j = 0;
    while (i < ninio && j < ninia) {
        if (abs(v[i] - m[j]) <= 1) {
            sol++;
            i++;
            j++;
        } else if (v[i] < m[j]) {
            i++;
        } else {
            j++;
        }
    }

    cout << sol << "\n";

    return 0;
}