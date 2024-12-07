#include <bits/stdc++.h>
#include <climits>
using namespace std;


int main(){
    int n; 
    cin >> n;
    priority_queue<int> q;
    vector<bool> ocupado(n+1, false);

    ocupado[0] = true;
    for (int i = 0; i < n/2; i++) {
        int pize = 0;
        cin >> pize;
        
        // Si es par esta mal
        if(pize % 2 == 0)
            q.push(pize);
        
        ocupado[pize] = true;
    }

    int mal = q.size();
    int sol = 0;

    while(!q.empty()) {
        int v = q.top();
        q.pop();

        int actualDer = 0;
        int solDer = 0;
        for(int i = v; i < n; i++) {
            if(i % 2 != 0 && !ocupado[i]) {
                actualDer++;
                break;
            }
            solDer++;
        }
        if(actualDer == 0) solDer = INT_MAX;

        // Lo mimso para la izquierda
        int actualIzq = 0;
        int solIzq = 0;
        for(int i = v; i > 1; i--) {
            if(i % 2 != 0 && !ocupado[i]) {
                actualIzq++;
                break;
            }
            solIzq++;
        }

        if(actualIzq == 0) solIzq = INT_MAX;

        ocupado[v] = false;

        if(solDer < solIzq) {
            ocupado[v + solDer] = true;
            sol += solDer;
        } else {
            ocupado[v - solIzq] = true;
            sol += solIzq;
        } 
    }

    cout << sol << "\n";

    return 0;
}