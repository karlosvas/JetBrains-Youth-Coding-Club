#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int h = stoi(s.substr(0, s.find(":")));
    int m = stoi(s.substr(s.find(":") + 1));
    m++;

    while (true) {
        for (int nm = m; nm < 60; nm++) {
            string h_str = to_string(h);
            string m_str = to_string(nm);
            h_str = (h < 10 ? "0" + h_str : h_str);
            m_str = (nm < 10 ? "0" + m_str : m_str);

            if (h_str[0] == m_str[1] && h_str[1] == m_str[0]) {
                cout << h_str << ":" << m_str << "\n";
                return 0;
            }
        }

        m = 0;
        h++;
        h %= 24;
    }
}