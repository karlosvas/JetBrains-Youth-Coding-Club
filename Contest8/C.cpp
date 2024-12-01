#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int N = 1;
    int a,b,c;
    int d,e,f;
    int g,h,i;

    cin >> a >> b >> c;
    cin >> d >> e >> f;
    cin >> g >> h >> i;

    while(N <= 1000000){
        a = N-b-c;
        e = N-d-f;
        i = N-g-h;

        if ((a + b + c == d + e + f) &&
            (d + e + f == g + h + i) &&
            (g + h + i == g + e + c) &&
            (g + e + c == a + e + i) &&
            (a + e + i == a + d + g) &&
            (a + d + g == b + e + h) &&
            (b + e + h == c + f + i)) {
            cout << a << " " << b << " " << c << "\n";
            cout << d << " " << e << " " << f << "\n";
            cout << g << " " << h << " " << i << "\n";
            break;
        }
        N++;
    };
    return 0;
}