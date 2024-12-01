#include <bits/stdc++.h>
using namespace std;

int main(){
    // Dias (n), kilos de frambuesas que deve dar para cojer un  barril(x)
    int n,x; cin >> n >> x;
    vector<vector<int>> v(n);
    vector<int> res;

    for (int i = 0; i < n; i++) {
        // Precio del barril ese dia (a)
        int a; cin >> a;
        res.push_back(a);
    }

    int bestSolution = 0;
    for (int i = 0; i < res.size()-1; i++) 
        if(res[i] > res[i+1] && (res[i] - res[i+1] > 0 && res[i] - res[i+1] -x > 0))
            bestSolution = max(bestSolution, res[i] - res[i+1] - x);
    

    cout << bestSolution << "\n";

    return 0;
}