#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    stringstream ss(str);
    string x;


    long long ans=0;
    while(ss>>x)
    {
        ans += stoi(x);
    }

    cout<<ans<<"\n";

    return 0;
}