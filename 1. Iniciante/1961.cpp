#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int pulo, Tcano;
    cin>>pulo>>Tcano;
    int cano[Tcano];
    bool condicao(true);

    
    for(int i=0; i<Tcano; i++){
        cin>>cano[i];

    }

    for(int i=0; i<Tcano-1; i++){
        int diferenca = abs(cano[i]-cano[i+1]);
            if(cano[0]>pulo){
                cout<<"GAME OVER"<<endl;
                condicao=false;
                break;
                
            }
            else if(diferenca>pulo){
                cout<<"GAME OVER"<<endl;
                condicao=false;
            }

        }
    if(condicao==true){
        cout<<"YOU WIN"<<endl;
    }


}