#include <iostream>
using namespace std;

int main(){
    int horaI, minutoI, horaF, minutoF;
    cin>>horaI>>minutoI >>horaF>>minutoF;

    int tempoI = horaI*60 + minutoI;
    int tempoF = horaF*60 + minutoF;
    int tempoJogo = tempoF -tempoI;
    if(tempoJogo >0){
        int horaJ =tempoJogo/60;
        tempoJogo %=60;
        cout<<"O JOGO DUROU "<<horaJ<<" HORA(S) E "<<tempoJogo<<" MINUTO(S)"<<endl;
    }
    else if(tempoJogo ==0){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else if(tempoJogo<0){
        tempoJogo = (60*24)+tempoJogo;
        int horaJ2 = tempoJogo/60;
        tempoJogo %=60;
        cout<<"O JOGO DUROU "<<horaJ2<<" HORA(S) E "<<tempoJogo<<" MINUTO(S)"<<endl;
    }
}