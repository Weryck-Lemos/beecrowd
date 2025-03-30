#include <bits/stdc++.h>
using namespace std;

const int MAXN = 26;
vector<vector<int>> g(MAXN);
vector<bool> vis(MAXN);

void dfs(int x, vector<char>& component)
{
    vis[x] = true;
    component.push_back(char(x + 'a'));
    for (auto u : g[x])
    {
        if (!vis[u])
        {
            dfs(u, component);
        }
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int rep, caso = 1;
    cin >> rep;

    while (rep--)
    {
        int n, m;
        cin >> n >> m;

        g.assign(MAXN, vector<int>());
        vis.assign(MAXN, false);

        while (m--)
        {
            char v, w;
            cin >> v >> w;
            int vidx = v - 'a';
            int widx = w - 'a';
            g[vidx].push_back(widx);
            g[widx].push_back(vidx);
        }

        cout << "Case #" << caso << ":" << endl;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                vector<char> component;
                dfs(i, component);
                sort(component.begin(), component.end());
                for (size_t j = 0; j < component.size(); j++)
                {
                    cout << component[j]<<",";
                }
                cout << endl;
                ans++;
            }
        }

        cout << ans << " connected components" << endl << endl;
        caso++;
    }
    return 0;
}
