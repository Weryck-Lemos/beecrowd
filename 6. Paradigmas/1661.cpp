#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;

    while(cin>>n && n!=0)
    {
        vector<int> vinho(n);

        for(int i=0; i<n; i++)
        {
            cin>>vinho[i];
        }

        ll saldo=0, trabalho=0;
        for(int i=0; i<n; i++)
        {
            saldo += vinho[i];
            trabalho += abs(saldo);
        }

        cout<<trabalho<<endl;
    }

    
}