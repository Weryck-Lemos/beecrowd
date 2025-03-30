#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, m;
    map<string, int> matou;
    set<string>morreu;
    while(cin>>a>>m)
    {
        matou[a]++;
        morreu.insert(m);
    }

    for(auto& nome : morreu)
    {
        matou.erase(nome);
    }

    cout<<"HALL OF MURDERERS"<<endl;
    for(auto& par : matou)
    {
        cout<<par.first<<" "<<par.second<<endl;
    }
}