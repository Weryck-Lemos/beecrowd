#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iX, iY, fX, fY;

    while(cin>>iX>>iY>>fX>>fY)
    {
        if(iX==0) return 0;
        
        if((iX == fX) && (iY == fY)) cout<<0<<'\n';

        else if((iX == fX) || (iY == fY) || abs(iX - fX) == abs(iY - fY)) cout<<1<<'\n';

        else cout<<2<<'\n';
    }
}