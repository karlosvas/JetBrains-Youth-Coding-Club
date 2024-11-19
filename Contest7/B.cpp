#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
   ll T; cin >> T;
   while(T--){
        ll N; cin >>N;
        ll i = 0;
        ll resta = 0;
        while(pow(2, i) <= N){
            resta += pow(2, i);
            i++;
        }
        cout <<((N*(N+1)/2) - resta)-resta<<"\n";        
   }
    return 0;
}