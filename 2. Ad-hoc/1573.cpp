#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

    while(cin>>a>>b>>c && a!=0 && b!=0 && c!=0)
    {

        auto ans = cbrt(a*b*c);

        cout<< int(ans) <<endl;
    }
}