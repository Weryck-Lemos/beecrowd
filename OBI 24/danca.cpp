#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    cin.tie(0)->sync_with_stdio(0);
    int n,m, p, alu=1;
    cin>>n>>m>>p;
    int pista[n][m], count_c=0, count_l=0;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            pista[i][j] = alu;
            alu++;
        }

    while(p--)
    {
        char op;
        int x, y;
        cin>>op>>x>>y;
        

        x-=1;
        y-=1;

        if(op == 'C' && m>2)
        {
            for(int i=0; i<n; i++) swap(pista[i][x], pista[i][y]);

        }

        else if(op=='L' && n>2)
        {
           for(int i=0; i<m; i++) swap(pista[x][i], pista[y][i]); 
        }
        
        else if(op=='C') count_c++;

        else if(op=='L') count_l++;
    }

    if(m==2 && count_c % 2 !=0)
        {
        for(int i=0; i<n; i++)
        {
            for(int j=1; j>=0; j--)
                {
                cout<<pista[i][j]<<" ";
                }
                cout<<'\n';
            }
        }

    else if(n==2 && count_l % 2 !=0)
        {
            for(int i=1; i>=0; i--)
            {
                for(int j=0; j<m; j++)
                    {
                    cout<<pista[i][j]<<" ";
                    }
                cout<<'\n';
            }
        }

    
    else
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
            cout<<pista[i][j]<<" ";
            }
            cout<<'\n';
        }
    }
}