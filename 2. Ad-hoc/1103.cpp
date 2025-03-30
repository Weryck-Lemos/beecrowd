#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hi, mi, hf, mf;

    while(cin>>hi>>mi>>hf>>mf)
    {
        if(hi==0 && mi==0 && hf==0 && mf==0) return 0;

        int toti = hi*60 + mi, totf = hf*60 + mf;

        if(toti<totf) cout<< totf - toti<<"\n";

        else cout<<totf - toti + (24*60) << '\n';
    }
}