#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        long long suma = a + b + c;
        if (suma % 2 == 0) {
            if(a > b){
                cout << "First" << endl;
            } else {
                cout << "Second" << endl;
            }
        } else {
            if(a >= b){
                cout << "First" << endl;
            } else{
                cout << "Second" << endl;
            }
        }
    }
    
    return 0;
}