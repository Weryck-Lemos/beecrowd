#include <iostream>
using namespace std;

int main(){
    int horaI, horaF, tempoJogo, tempoJogo2;
    cin>> horaI >> horaF;
    tempoJogo = (24-horaI)+horaF;

    if (tempoJogo>24){
        tempoJogo2 = horaF-horaI;
        cout<<"O JOGO DUROU "<<tempoJogo2<<" HORA(S)"<<endl;
    }
    else cout<<"O JOGO DUROU "<<tempoJogo<<" HORA(S)"<< endl;
}