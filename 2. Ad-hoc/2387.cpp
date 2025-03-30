#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct consulta
{
    ll inicio, fim;
};

bool compara(consulta a, consulta b)
{
    return a.fim < b.fim;
}

int main()
{
    int n;
    cin>>n;

    vector<consulta> hora(n);
    for(int i=0; i<n; i++)
    {
        cin>>hora[i].inicio>>hora[i].fim;
    }

    sort(hora.begin(), hora.end(), compara);

    ll qtd=0, ultimaHora = -1;
    for(auto c : hora)
    {
        if(c.inicio >= ultimaHora)
        {
            qtd++;
            ultimaHora = c.fim;
        }
    }

    cout<<qtd<<endl;
}