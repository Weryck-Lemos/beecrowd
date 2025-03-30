#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int ida;
        cin>>ida;

        map<string, double> preco;
        for(int i=0; i<ida; i++)
        {
            string nome;
            double valor;
            cin>>nome>>valor;

            preco[nome] = valor;
        }


        double compras, tot=0;
        cin>>compras;
        for(int i=0; i<compras; i++)
        {
            string fruta;
            double qtd;
            cin>>fruta>>qtd;

            tot += preco[fruta]*qtd;
        }

        cout<<fixed<<setprecision(2);
        cout<<"R$ "<<tot<<endl;
    }
}