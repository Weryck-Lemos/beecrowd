#include <bits/stdc++.h>
using namespace std;

const int MAXN = 505;
int n,m;
char grid[MAXN][MAXN];
int v[]= {-1,1};

bool isvalid(int x, int y)
{
    return x>=0 && x<n && y>=0 && y<m;
}

void dfs(int x, int y)
{
    if(!isvalid(x,y)) return;

    grid[x][y]='o';

    if(grid[x+1][y]=='#')
    {
        for(int i=0; i<2; i++)
        {
            if(grid[x][y+v[i]]=='.')
            {
                dfs(x, y+v[i]);
            }
        }
    }

    else if(grid[x+1][y]=='.')
    {
        dfs(x+1,y);
    }
}

int main()
{
    cin>>n>>m;
    int x,y;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='o')
            {
                x=i;
                y=j;
            }

        }
    }

    dfs(x,y);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}