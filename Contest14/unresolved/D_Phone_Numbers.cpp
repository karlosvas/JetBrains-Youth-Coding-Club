#include <bits/stdc++.h>
using namespace std;

// Wrong answer on test 5
int main() {
    int n;
    cin >> n;

    unordered_map<string, unordered_set<string>> m;
    for (int i = 0; i < n; i++) {
        string name;
        int phone;

        cin >> name >> phone;
        for (int j = 0; j < phone; j++) {
            string friends_number;
            cin >> friends_number;
            if (m[name].empty()) {
                m[name].insert(friends_number);
            } else {
                // Verificamos que el que añadimos no tenga ya otro que termine con el mismo numero
                unordered_set<string> s;
                bool finded1 = true;
                for (string s2 : m[name]) {
                    if (s2 != friends_number && s2[s2.size() - 1] == friends_number[friends_number.size() - 1]) {
                        finded1 = false;
                        break;
                    }
                }
                if (finded1)
                    s.insert(friends_number);

                // Nuevos encontrados
                for (string k : s) {
                    // Voy a añadir un nuevo numero, k
                    bool finded = true;
                    for (string w : m[name]) {
                        // Si hay algún otro numero que acabe con la mismo número, por ejemplo quiero añadir 69, pero ya tenia 9 en otra llamada de un usuario con en otra lista de núemros
                        if (k != w && k[k.size() - 1] == w[w.size() - 1]) {
                            finded = false;
                            break;
                        }
                    }

                    if (finded)
                        m[name].insert(k);
                }
            }
        }
    }

    cout << m.size() << "\n";
    for (const auto& [key, value] : m) {
        cout << key << " " << m[key].size();
        for (string s : value)
            cout << " " << s;
        cout << "\n";
    }

    return 0;
}