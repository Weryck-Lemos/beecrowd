#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 10;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        int v, w;
        cin >> v >> w;
        set<pair<int, int>> g;
        for (int i = 0; i < w; i++) {
            int u, v;
            cin >> u >> v;
            if (u > v) swap(u, v);
            g.insert({u, v});
        }

        cout << g.size()*2<<endl;
    }
}