#include <bits/stdc++.h>
using namespace std;

const int MAXN =1001;

int n,m, mapa[MAXN][MAXN];
int h[]= {0,0,-1,1};
int v[]={-1,1,0,0};

bool verif(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<m;
}

int dfs(int x, int i, int j)
{
    int valor = x;

    
}


int main()
{
    cin>>n>>m;

    int mapa[n][m];
    int ans[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cin>>mapa[i][j];
        }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ans[i][j]= dfs(mapa[i][j], i, j);
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}