#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  string s;
  cin >> k >> s;

  vector<string> q;  // String formado con k cadenas utilziando el string s
  map<char, int>
      charCount;  // Mapa de caracteres y su última posición en el string s

  for (int i = 0; i < s.size(); i++) {
    charCount[s[i]] = i;
    if (charCount.size() == k) break;
  }

  if (charCount.size() < k) {
    // Si no hay k caracteres diferentes no se puede formar k cadenas con el
    // primero difernente
    cout << "NO\n";
    return 0;
  }

  // Los ordeno por orden de aparición
  priority_queue<int, vector<int>, greater<int>> pq;
  for (const auto& [c, count] : charCount) pq.push(count);

  // Hago una subcadena desde aux hasta el siguiente caracter diferente
  int aux = 0;
  while (!pq.empty()) {
    // Siguiente posición de un caracter diferente
    int count = pq.top();
    if (!q.size() == k - 1) {
      // Si no es el último va hasta la siguiente letra diferente
      q.push_back(s.substr(aux, count + 1));
    } else {
      // Si es el último va hasta el final
      q.push_back(s.substr(aux, s.size()));
    }
    pq.pop();
    aux = count + 1;
  }

  if (charCount.size() >= k) {
    cout << "YES\n";
    for (const auto& part : q) cout << part << "\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}