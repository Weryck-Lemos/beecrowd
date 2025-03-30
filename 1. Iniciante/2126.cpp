#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int i=1;
    string n, sub;

    while(cin>>sub>>n){
        int count=0, posicao=0, last_pos=0;

        while((posicao = n.find(sub, posicao)) != string::npos){
            last_pos =  posicao;
            count++;
            posicao += sub.size();
        }
        cout<<"Caso #"<<i<<":"<<endl;

        last_pos++;
        if(count >0){
                cout<<"Qtd.Subsequencias: "<<count<<endl;
                cout<<"Pos: "<<last_pos<<endl;
            }

        else{
            cout<<"Nao existe subsequencia"<<endl;
        }
        i++;
        cout<<endl;
    }

}