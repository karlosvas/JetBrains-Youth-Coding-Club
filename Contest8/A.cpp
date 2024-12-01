#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++){
        int a; cin >>  a;
        v[i] = {a, i+1};
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i+=2) 
        cout << v[i].second << " "<< v[n-i-1].second << "\n";

    return 0;
}