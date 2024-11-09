#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  priority_queue<int, vector<int>, greater<int>> pq;  // Subcadenas maximas

  for (int i = 0; i < s.size(); i++) {
    string sucadena;
    for (int j = i; j < s.size(); j++) {
      sucadena += s[j];
    }
    string aux = sucadena;
    reverse(sucadena.begin(), sucadena.end());
    if (sucadena.size() > 0 && sucadena != aux) {
      pq.push(sucadena.size());
      break;
    }
  }

  if (pq.empty())
    cout << 0 << "\n";
  else
    cout << pq.top() << "\n";

  return 0;
}