#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, x;
    cin >> n >> x;
    int suma = 0;
    for(int i = 0; i < n; i++){
        int card; cin >> card;
        suma += card;
    }
    int divisiones = abs(suma) / x;
     cout << divisiones + (suma % x != 0) << "\n";
    return 0;
}