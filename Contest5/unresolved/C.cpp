#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    string sol;
    string pattern = "abcabc";

    int full_blocks = n / 6;
    for (int i = 0; i < full_blocks; ++i) {
      sol += pattern;
    }

    int remaining_chars = n % 6;
    for (int i = 0; i < remaining_chars; ++i) {
      sol += pattern[i];
    }

    cout << sol << "\n";
  }
  return 0;
}