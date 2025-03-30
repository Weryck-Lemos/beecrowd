#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<int, int> ans;

    while(n--)
    {
        int x;
        cin>>x;

        ans[x]++;
    }

    for(int i=0; i<=2000; i++)
    {
        if(ans[i] != 0)
        {
            cout<<i<<" aparece "<<ans[i]<<" vez(es)\n";
        }
    }
}