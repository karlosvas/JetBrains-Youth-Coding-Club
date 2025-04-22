#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int N = A + B + 1;

    if (A == 0) {
        for (int i = N; i >= 1; --i) {
            cout << i << " ";
        }
    } else if (B == 0) {
        for (int i = 1; i <= N; ++i) {
            cout << i << " ";
        }
    } else {
        vector<int> sequence;
        sequence.push_back(1);
        int current = B + 2;
        sequence.push_back(current);
        for (int i = 0; i < A - 1; ++i) {
            current++;
            sequence.push_back(current);
        }
        vector<int> remaining;
        for (int i = 2; i <= B + 1; ++i) {
            remaining.push_back(i);
        }
        reverse(remaining.begin(), remaining.end());
        sequence.insert(sequence.end(), remaining.begin(), remaining.end());
        for (int num : sequence) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}