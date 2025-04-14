#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1 -> ((
    // 2 -> ()
    // 3 -> )(
    // 3 -> ))
    long long cnt1, cnt2, cnt3, cnt4;
    cin >> cnt1 >> cnt2 >> cnt3 >> cnt4;

    if (cnt1 != cnt4) {
        // The same cnt1*2+cnt2+cnt3 == cnt2+cnt3+cnt4*2
        cout << "0\n";
    } else if (cnt1 == 0) {
        cout << (cnt3 == 0 ? 1 : 0) << "\n";
    } else {
        if (cnt3 + 1 <= cnt2) {
            cout << 1 << "\n";
        } else {
            long long extra = cnt3 + 1 - cnt2;
            long long needed = (extra + 1) / 2;  // ceil(extra/2)
            cout << (cnt1 >= needed ? 1 : 0) << "\n";
        }
    }

    return 0;
}

// ((
// X
// ))))))))
// )()()(

// (())