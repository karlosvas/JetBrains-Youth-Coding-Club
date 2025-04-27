#include <bits/stdc++.h>
using namespace std;

// Wrong answer on test 5
int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    map<char, int> freq;
    for (char c : s)
        freq[c]++;

    vector<pair<char, int>> chars;
    for (auto& [ch, count] : freq)
        chars.push_back({ch, count});

    sort(chars.begin(), chars.end(),
         [](const pair<char, int>& a, const pair<char, int>& b) {
             return a.second < b.second;
         });

    vector<char> sol;
    int count = 0;
    for (auto [key, value] : chars) {
        if (value <= k) {
            k -= value;
        } else {
            count++;
            for (int i = 0; i < value; i++)
                sol.push_back(key);
        }
    }

    cout << count << "\n";
    for (char c : sol)
        cout << c;
    cout << "\n";
    return 0;
}