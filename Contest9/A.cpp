#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<string,string> v;

    cin >> v.first >> v.second;

    cout<<v.first<<" "<<v.second<<"\n";

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string suspect1, suspect2;
        cin >> suspect1 >> suspect2;
        
        if(suspect1 == v.first)
            v.first = suspect2;
        else if(suspect2 == v.first)
            v.first = suspect1;
        else if(suspect1 == v.second)
            v.second = suspect2;
        else if(suspect2 == v.second)
            v.second = suspect1;
        cout<<v.first<<" "<<v.second<<"\n";
    }
    
    return 0;
}