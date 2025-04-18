#include <iostream>
using namespace std;

int main(){
    int hora, minuto;

    while(scanf("%d : %d", &hora, &minuto)==2){

        hora*=60;

        int atraso = 480 -(hora + minuto + 60);

        if( atraso<=0){
            cout<<"Atraso maximo: "<<abs(atraso)<<endl;
        }

        else{
            cout<<"Atraso maximo: 0"<<endl;
        }
    }

}