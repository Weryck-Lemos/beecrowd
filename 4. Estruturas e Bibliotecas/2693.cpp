#include <bits/stdc++.h>
using namespace std;

struct van
{
    string nome;
    char regiao;
    int dist;

};

bool compara(van a, van b)
{
    if(a.dist!= b.dist) return a.dist < b.dist;

    if(a.regiao != b.regiao) return a.regiao< b.regiao;

    return a.nome<b.nome;
}

int main()
{
    int n;
    while(cin>>n)
    {
        vector<van> aluno(n);

        for(int i=0; i<n; i++)
        {
            cin>>aluno[i].nome>>aluno[i].regiao>>aluno[i].dist;
        }

        sort(aluno.begin(), aluno.end(), compara);

        for(auto u : aluno)
        {
            cout<<u.nome<<endl;
        }


    }
}