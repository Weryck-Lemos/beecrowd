#include <bits/stdc++.h>
using namespace std;

const int MAXN = 51;
int n,m;
int h[]= {0,0,-1,1};
int v[]= {-1,1,0,0};
char grid[MAXN][MAXN];

bool isvalid(int x, int y)
{
    return x>=0 && x<n && y>=0 && y<m;
}

void dfs(int x, int y)
{
    queue<pair<int,int>> q;
    q.push({x,y});


    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for(int i=0; i<4; i++)
        {
            int dx= x+h[i];
            int dy= y+v[i];

            if(isvalid(dx,dy) && grid[dx][dy]=='A')
            {
                q.push({dx,dy});
                grid[dx][dy]='T';
            }
        }

    }
}

int main()
{
    while(cin>>n>>m)
    {

        if(n==0 && m==0) return 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>grid[i][j];
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]=='T')
                {
                    dfs(i,j);
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }

        cout<<endl;
    }
}