#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    if (n.size() == 1) {
        cout << 0 << "\n";
        return 0;
    }

    int sum = 0;
    for (char c : n) {
        sum += c - '0';
    }

    int steps = 1;

    while (sum >= 10) {
        int current = sum;
        sum = 0;
        while (current > 0) {
            sum += current % 10;
            current /= 10;
        }
        steps++;
    }

    cout << steps << "\n";

    return 0;
}