#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    while(n--)
    {
        string lista;
        getline(cin, lista);

        istringstream iss(lista);
        set<string> itens;


        string item;
        while(iss >> item)
        {
            itens.insert(item);
        }


        bool first = true;
        for(auto &it : itens)
        {
            if(!first) cout<<' ';

            cout<<it;

            first = false;

        }

        cout<<endl;
    }
}