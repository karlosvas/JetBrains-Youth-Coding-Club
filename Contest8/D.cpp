#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int sumaAritmetica = 0;

    vector<int> u(N);
    for (int i = 0; i < N; i++) {
        cin >> u[i];
        sumaAritmetica += u[i];
    }

    vector<int> v;
    for (int i = 0; i < N; i++) {
        int sumaSinActual = sumaAritmetica - u[i];
        double mediaSinActual = static_cast<double>(sumaSinActual) / (N - 1);

        if (u[i] == mediaSinActual) 
            v.push_back(i + 1);
    }

    cout << v.size() << "\n";
    if(v.size() != 0){
        for (int i = 0; i < v.size()-1; i++)
            cout << v[i] << " ";
        cout << v[v.size()-1] << "\n";
    }
    
    return 0;
}