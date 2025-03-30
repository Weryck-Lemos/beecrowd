#include <bits/stdc++.h>
using namespace std;

struct camisa
{
    string nome;
    string cor;
    char tamanho;
};

bool compara(camisa a, camisa b)
{
    if(a.cor != b.cor) return a.cor < b.cor;

    if(a.tamanho != b.tamanho) return a.tamanho >  b.tamanho;

    return a.nome < b.nome;
}

int main()
{
    int n;
    bool primeiro = true;
    while(cin>>n && n!=0)
    {
        cin.ignore();

        if(primeiro) primeiro = false;
        else cout<<endl;

        vector<camisa> x(n);
        for(int i=0; i<n; i++)
        {
            getline(cin, x[i].nome); 
            cin>>x[i].cor>>x[i].tamanho;
            cin.ignore();
        }

        sort(x.begin(), x.end(), compara);

        for(auto c : x)
        {
            cout<<c.cor<<" "<<c.tamanho<<" "<<c.nome<<endl;
        }

    }
}