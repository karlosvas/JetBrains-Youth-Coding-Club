#include <bits/stdc++.h>

#include <numeric>
using namespace std;
using ll = long long;

int main() {
  ll l, r;
  cin >> l >> r;

  for (ll a = l; a <= r - 2; ++a) {
    for (ll b = a + 1; b <= r - 1; ++b) {
      for (ll c = b + 1; c <= r; ++c) {
        if (gcd(a, b) == 1 && gcd(b, c) == 1 && gcd(a, c) != 1) {
          cout << a << " " << b << " " << c << "\n";
          return 0;
        }
      }
    }
  }

  cout << -1 << "\n";
  return 0;
}