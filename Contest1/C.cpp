#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
    int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
 
    int segundos = 0;
 
    for (int i = a; i <= b; i++) {
        string numStr = to_string(i);
        for (char c : numStr) {
            int digit = c - '0';
            segundos += arr[digit];
        }
    }
 
    cout << segundos << endl;
 
    return 0;
}