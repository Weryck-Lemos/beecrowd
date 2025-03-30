#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define INF INT_MAX

int n, m;

int main()
{
    int rep;
    cin>>rep;
    while(rep--)
    {
        cin>>n>>m;

        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        vector<ll> dp(m+1, INF);
        dp[0]=0;

        for(int i=1; i<=m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i >= a[j] && dp[i- a[j]] < INF) 
                    dp[i] = min(dp[i], dp[i- a[j]] +1);
            }
        }

        cout<<dp[m]<<endl;
        
    }
}