#include <iostream>
using namespace std;

int main(){
    int jogos=0, vi=0, vg=0, empate=0, inter, gremio;
    while(true){
        int pergunta;
        cin>>inter>>gremio;
        if(inter>gremio){
            vi++;
        }
        else if(inter==gremio){
            empate++;
        }
        else vg++;


        jogos++;

        while(true){
            cout<<"Novo grenal (1-sim 2-nao)"<<endl;
            cin>>pergunta;
            if(pergunta==1 || pergunta==2){
                break;
            }
            
        }
        if(pergunta==2){
                break;
            }
        
    }
    cout<<jogos<<" grenais"<<endl;
    cout<<"Inter:"<<vi<<endl;
    cout<<"Gremio:"<<vg<<endl;
    cout<<"Empates:"<<empate<<endl;
    if(vi>vg) cout<<"Inter venceu mais"<<endl;
    else if(vg>vi) cout<<"Gremio venceu mais"<<endl;
    else cout<<"Nao houve vencedor"<<endl;
}