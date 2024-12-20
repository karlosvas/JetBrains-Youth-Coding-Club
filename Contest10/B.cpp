#include <bits/stdc++.h>
using namespace std;


int main(){
    int pares; 
    cin >> pares;
    for(int i = 0; i < pares; i++){
        int a, b;
        cin >> a >> b;
        if(a == b){
            cout << 1 << "\n";
        } else  {
            int op = 0;
            while(a > 0 && b > 0){
                if(a>b){
                    op += a/b ;
                    a = a%b;
                } else {
                    op += b/a ;
                    b = b%a;
                }
            }
            cout << op << "\n";
        }
    }
    return 0;
}