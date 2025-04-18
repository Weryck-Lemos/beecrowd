#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string valor;
        cin>>valor;

        if(valor[0]==valor[2])
        {
            cout<<(valor[0]-'0') * (valor[2]-'0')<<'\n';
        }

        else if(isupper(valor[1]))
        {
            cout<<(valor[2]-'0') - (valor[0]-'0')<<'\n';
        }

        else if(islower(valor[1]))
        {
            cout<<(valor[0]-'0') + (valor[2]-'0')<<'\n';
        }
    }
}