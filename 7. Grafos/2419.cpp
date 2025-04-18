#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m, ans=0;
    cin>>n>>m;

    char mapa[n][m];
    for(int i=0; i<n; i++)for(int j=0; j<m; j++)cin>>mapa[i][j];

    for(int i=0; i<n; i++)for(int j=0; j<m; j++)
    {
        if(mapa[i][j]=='#')
        {
            if(i==0  || mapa[i-1][j]=='.'
            || i==n-1|| mapa[i+1][j]=='.'
            || j==0  || mapa[i][j+1]=='.'
            || j==m-1|| mapa[i][j-1]=='.') ans++;
        }
    }

    cout<<ans<<endl;
}