#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;


    vector<int> fatorial(11);
    fatorial[0] = 1;

    for(int i=1; i<11; i++)
    {
        fatorial[i] = fatorial[i-1]*i;
    }

    int ans=0;
    for(int i=10; i>=0; i--)
    {
        int x = n/fatorial[i];
        ans += x;
        n -= x*fatorial[i];
    }

    cout<<ans<<endl;


}