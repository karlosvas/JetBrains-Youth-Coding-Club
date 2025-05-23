#include <bits/stdc++.h>

#include <climits>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long MIN_DIST = LLONG_MAX;
    long long pos = 0;
    long long numBoxes = 0;

    for (long long i = 0; i < k; i++) {
        long long ki;
        cin >> ki;

        long long left = n % ki;
        if (left < MIN_DIST) {
            MIN_DIST = left;
            pos = i + 1;
            numBoxes = n / ki;
        }
    }

    cout << pos << " " << numBoxes << "\n";
    return 0;
}