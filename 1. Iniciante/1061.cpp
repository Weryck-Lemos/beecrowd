#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string descricao;
    int diaI, horaI, minutoI, segundoI;
    cin>> descricao>> diaI;
    scanf("%d : %d : %d", &horaI, &minutoI, &segundoI);

    int diaF, horaF, minutoF, segundoF;
    cin >>descricao>>diaF;
    scanf("%d : %d : %d", &horaF, &minutoF, &segundoF);

    int tempoI = (diaI*86400)+(horaI*3600)+(minutoI*60)+segundoI;
    int tempoF =(diaF*86400)+(horaF*3600)+(minutoF*60)+segundoF;
    int tempoFesta = tempoF - tempoI;

    int diaFesta = tempoFesta/86400;
    tempoFesta %=86400;
    cout<<diaFesta<<" dia(s)"<<endl;

    int horaFesta = tempoFesta/3600;
    tempoFesta %=3600;
    cout<<horaFesta<<" hora(s)"<<endl;

    int minutoFesta = tempoFesta/60;
    tempoFesta %=60;
    cout<<minutoFesta<<" minuto(s)"<<endl;

    cout<<tempoFesta<<" segundo(s)"<<endl;
}