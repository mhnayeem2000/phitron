#include <bits/stdc++.h>
using namespace std;
typedef pair<int ,int> pii;
vector<pii> edges;
int main() {
    int e;
    cin >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    sort(edges.begin(), edges.end());

    for (const pii & e : edges) {
        cout << e.first << " " << e.second << endl;
    }

    return 0;
}
