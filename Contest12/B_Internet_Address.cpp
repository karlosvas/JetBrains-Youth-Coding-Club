#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    string sol = "";
    string remaining;

    if (s[0] == 'h') {
        sol = "http";
        remaining = s.substr(4);
    } else {
        sol = "ftp";
        remaining = s.substr(3);
    }

    sol += "://";

    size_t indexRu = remaining.find("ru", 1);

    string domain = remaining.substr(0, indexRu);
    sol += domain + ".ru";

    if (indexRu + 2 < remaining.size())
        sol += "/" + remaining.substr(indexRu + 2);

    cout << sol << "\n";
    return 0;
}