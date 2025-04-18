#include <bits/stdc++.h>
using namespace std;

struct Inscricao {
    string nome;
    string escolha;
    int ordem;
};

bool compararOrdem(Inscricao a, Inscricao b) {
    if (a.escolha == b.escolha)
    {
        if (a.nome.size() == b.nome.size())
        {
            return a.ordem < b.ordem;
        }
        return a.nome.size() > b.nome.size();
    }
    return a.escolha > b.escolha;
}

bool compararAlfabetico(Inscricao a, Inscricao b) {
    if (a.escolha == b.escolha)
    {
        return a.nome < b.nome;
    }
    return a.escolha > b.escolha;
}

int main() {
    vector<Inscricao> inscricoes;
    set<string> nomesVistos;
    string nome, escolha;
    int ordem = 0;

    while (cin>>nome)
    {
        if (nome == "FIM") break;
        cin >> escolha;

        if (escolha == "YES")
        {
            if (nomesVistos.find(nome) == nomesVistos.end()) {
                inscricoes.push_back({nome, escolha, ordem++});
                nomesVistos.insert(nome);
            }
        } 
        else
        {
            inscricoes.push_back({nome, escolha, ordem++});
        }
    }

    sort(inscricoes.begin(), inscricoes.end(), compararAlfabetico);

    for (const auto& inscricao : inscricoes)
    {
        cout << inscricao.nome << endl;
    }

    cout << endl;

    sort(inscricoes.begin(), inscricoes.end(), compararOrdem);

    cout << "Amigo do Habay:\n" << inscricoes.front().nome << endl;

    return 0;
}
