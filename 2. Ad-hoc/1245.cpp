#include <iostream>
#include <map>
using namespace std;

int main(){
    int N, tamanho;
    char lado;
    map<int, int> direita, esquerda;
    while(cin>>N){
        direita.clear();
        esquerda.clear();

        for(int i=0; i<N; i++){
            cin>>tamanho>>lado;

            if(lado=='D'){
                direita[tamanho]++;
            }

            else{
                esquerda[tamanho]++;
            }
        }

        int pares=0;

        for(auto& bota : esquerda){
            pares+=min(bota.second, direita[bota.first]);

        }

        cout<<pares<<endl;

    }
}