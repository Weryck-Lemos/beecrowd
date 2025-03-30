#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct pais
{
    string nome;
    ll ouro, prata, bronze;
};

bool compara(pais a, pais b)
{
    if (a.ouro != b.ouro) {
        return a.ouro > b.ouro;
    } else if (a.prata != b.prata) {
        return a.prata > b.prata;
    } else if (a.bronze != b.bronze) {
        return a.bronze > b.bronze;
    } else {
        return a.nome < b.nome;
    }
}

int main()
{
    int n;
    cin>>n;

    vector<pais> p(n);
    for(int i=0; i<n; i++)
    {
        cin>>p[i].nome>>p[i].ouro>>p[i].prata>>p[i].bronze;
    }

    sort(p.begin(), p.end(), compara);

    for(auto c : p)
    {
        cout<<c.nome<<" "<<c.ouro<<" "<<c.prata<<" "<<c.bronze<<endl;
    }
}