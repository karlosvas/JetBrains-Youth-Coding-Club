#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector<pair<string, string>> v;
    int maxPalabra = 8;
    int maxExt = 4;
    bool isPalabra = true;
    string aux = "";

    for (size_t i = 0; i < s.size(); i++) {
        if(s[i] == '.'){
            if(isPalabra){
                if(aux.length() > maxPalabra + maxExt){
                    cout << "NO\n";
                    return 0;
                } else if(aux.length() > maxPalabra && aux.length() - maxPalabra <= maxExt){
                    // Obtenemos palabra y extension
                    v.push_back({aux.substr(0, maxPalabra), aux.substr(maxPalabra)});
                } else if(aux.length() < maxPalabra && aux.length() > maxExt){
                    v.push_back({aux.substr(0, aux.length()-maxExt),aux.substr(aux.length()-maxExt)});
                } else {
                    cout << "NO\n";
                    return 0;
                }
                isPalabra = false;
            } else {
                if(aux.length() > maxPalabra + maxExt){
                    cout << "NO\n";
                    return 0;
                } else if(aux.length() > maxPalabra && aux.length() - maxPalabra <= maxExt){
                    // Obtenemos palabra y extension
                    v.push_back({aux.substr(0, maxPalabra), aux.substr(maxPalabra)});
                } else if(aux.length() < maxPalabra && aux.length() > maxExt){
                    v.push_back({aux.substr(0, aux.length()-maxExt),aux.substr(aux.length()-maxExt)});
                } else {
                    cout << "NO\n";
                    return 0;
                }
                isPalabra = true;
            }
        } else
            aux += s[i];
    }

    if(isPalabra){
        cout << "SI\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}