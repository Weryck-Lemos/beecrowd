#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll remove(ll a)
{
    while(a%10 == 0 && a> 0)
    {
        a/=10;
        
    }

    return a;
}

int main()
{
    vector<int> num(1000001, 1);
    ll a = 1;

    for(int i=1; i<=1000000; i++)
    {
        ll j = remove(i);
        a = remove(a*j) % 1000000;
        num[i] = a%10;
    }

    

    int n, x=1;
    while(cin>>n)
    {
        cout<<"Instancia "<<x<<endl;
        cout<<num[n]<<endl<<endl;
        x++;
    }

   
}