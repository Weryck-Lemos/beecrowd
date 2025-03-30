#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+10;
vector<vector<int>> g(MAXN);
vector<bool> vis(MAXN);

void dfs(int x)
{
    vis[x] = true;

    for(auto u : g[x])
    {
        if(!vis[u]) dfs(u);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int v,w;
        cin>>v>>w;

        g[v].push_back(w);
        g[w].push_back(v);
    }

    int ans=0;

    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            ans++;
        }
    }

    cout<< ans <<endl;
}