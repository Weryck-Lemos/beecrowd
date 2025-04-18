#include <bits/stdc++.h>
using namespace std;

int main()
{
    string d,n;
    while(cin>>d>>n && d!="0" && n!="0")
    {

        string revisao;

        for(char c : n)
        {
            if(c != d[0]) revisao.push_back(c);
        }

        int non_0 = 0;
        while(non_0 < revisao.size() && revisao[non_0]=='0') non_0++;
        revisao = revisao.substr(non_0);

        if(revisao.empty()) cout<<0<<endl;

        else cout<<revisao<<endl;
    }
}