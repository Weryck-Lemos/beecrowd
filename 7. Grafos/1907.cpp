#include <bits/stdc++.h>
using namespace std;

int n, m, ans=0;
const int MAXN = 1026;
const int inf = INT_MAX;
char mapa[MAXN][MAXN];

int h[] = {0,0,1,-1};
int v[] = {1,-1,0,0};

bool verif(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<m;
}

void bfs(int i, int j)
{
    queue<pair<int,int>> fila;

    fila.push(make_pair(i,j));

    mapa[i][j]='o';

    while(!fila.empty())
    {
        i=fila.front().first;
        j=fila.front().second;

        fila.pop();

        for(int k=0; k<4; k++)
        {
            int xi = i + h[k];
            int xj = j + v[k];

            if(verif(xi,xj)&& mapa[xi][xj]=='.')
            {
                mapa[xi][xj] = 'o';
                fila.push(make_pair(xi,xj));
            }
        }
    }
}

int main()
{
    cin>>n>>m;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cin>>mapa[i][j];
        }

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(mapa[i][j]=='.')
            {
                bfs(i,j);
                ans++;
            }
        }

    cout<<ans<<endl;
}