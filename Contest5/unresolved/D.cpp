#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  for (ll i = 0; i < a; ++i) {
    ll value = b + a * i;
    if ((value - d) % c == 0) {
      cout << value << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}