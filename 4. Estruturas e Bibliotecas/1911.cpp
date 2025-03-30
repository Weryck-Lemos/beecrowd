#include <bits/stdc++.h>
using namespace std;

bool checar(string nome, string assinatura)
{
    if(nome.size() != assinatura.size()) return false;


    int dif=0;
    for(int i=0; i<nome.size(); i++)
    {
        if(nome[i] != assinatura[i]) dif++;
    }

    if(dif>1) return false;
    else return true;
}

int main()
{
    int n,m;
    string nome, assinatura;


    while(cin>>n)
    {
        if(n==0) return 0;
        int ans=0;

        map<string, string> original;
        for(int i=0; i<n; i++)
        {
            cin>>nome>>assinatura;

            original[nome]= assinatura;
        }

        cin>>m;
        for(int i=0; i<m; i++)
        {
            
            cin>>nome>>assinatura;

            if(!checar(original[nome], assinatura)) ans++;
            
        }

        cout<<ans<<"\n";

    }
}