#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> feedback = {
        {1, "Rolien"}, {2, "Naej"}, {3, "Elehcim"}, {4,"Odranoel"}
    };

    int n;
    cin>>n;

    while(n--)
    {
        int trab;
        cin>>trab;

        for(int i =0; i<trab; i++)
        {
            int x;
            cin>>x;

            cout<<feedback[x]<<'\n';
        }
    }
}