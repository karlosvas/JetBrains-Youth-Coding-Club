#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    
    vector<int> left, right;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == 'l') 
            left.push_back(i + 1);
        else 
            right.push_back(i + 1);
    }
    
    for(int stone : right) 
        cout << stone << "\n";
    
    for(int i = left.size() - 1; i >= 0; i--)
        cout << left[i] << "\n";
    
    return 0;
}