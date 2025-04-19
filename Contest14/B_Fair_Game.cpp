#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> card_count;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        card_count[x]++;
    }

    if (card_count.size() != 2) {
        cout << "NO\n";
        return 0;
    }

    vector<pair<int, int>> cards;
    for (const auto& [card, count] : card_count) {
        cards.push_back({card, count});
    }

    if (cards[0].second == cards[1].second) {
        cout << "YES\n";
        cout << cards[1].first << " " << cards[0].first << "\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}