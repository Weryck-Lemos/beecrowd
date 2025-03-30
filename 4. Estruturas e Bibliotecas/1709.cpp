#include <iostream>
using namespace std;
//nao precisa verificar todas as cartas, se uma estiver ordenada, todas estão ;)
int embaralhamento(int p){
    int contagem = 0, posicao = 0;

    do{
        if(posicao < p/2){
            posicao = 2 * posicao + 1;
        }
        else{
            posicao = 2 * (posicao - p/2);
        }
        contagem++;
    } while(posicao != 0);

    return contagem;
}

int main(){
    int p;
    cin>>p;

    cout<<embaralhamento(p)<<endl;
}