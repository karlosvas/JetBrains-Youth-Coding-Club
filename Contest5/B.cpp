#include <bits/stdc++.h>
using namespace std;

using pii = pair<pair<int, int>, string>;

struct Compare
{
    bool operator()(const pii &a, const pii &b)
    {
        if (a.first.first == b.first.first)
        {
            return a.first.second < b.first.second;
        }
        return a.first.first < b.first.first;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<pii, vector<pii>, Compare> pq;

    while (n--)
    {
        string name, priority;
        cin >> name >> priority;
        if (priority == "rat")
            pq.push({{4, n}, name});
        else if (priority == "woman" || priority == "child")
            pq.push({{3, n}, name});
        else if (priority == "man")
            pq.push({{2, n}, name});
        else if (priority == "captain")
            pq.push({{1, n}, name});
    }

    while (!pq.empty())
    {
        string name = pq.top().second;
        cout << name << endl;
        pq.pop();
    }
    return 0;
}