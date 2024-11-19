#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    string input; cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    unordered_set<char> letters(input.begin(), input.end());

    if (letters.size() == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}