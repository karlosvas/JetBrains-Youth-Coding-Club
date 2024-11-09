#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    string s1;
    cin >> s1;
    if (!cin)
        return false;
    reverse(s1.begin(), s1.end());
    string s2;
    cin >> s2;
    string res = s1 == s2 ? "YES\n" : "NO\n";
    cout << res;
    return true;
}

int main()
{
    while (solve())
        ;
    return 0;
}