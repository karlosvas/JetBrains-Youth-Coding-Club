#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0 && i != n - 1) {
            cout << "R";
        }
        while (arr[i] > 0) {
            if (i == n - 1) {
                cout << "P";
                arr[i]--;
                if (arr[i] == 0) break;
                cout << "L";
                cout << "R";
            } else {
                cout << "PR";
                arr[i]--;
                if (arr[i] == 0) break;
                if (arr[i + 1] > 0) {
                    cout << "P";
                    arr[i + 1]--;
                }
                cout << "L";
            }
        }
    }

    cout << "\n";

    return 0;
}