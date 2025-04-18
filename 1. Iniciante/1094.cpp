#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int testes;
    cin >> testes;
    int total=0, utilizadoC=0, utilizadoS=0, utilizadoR=0;


    for(int i =1; i<=testes; i++){
        char animal;
        int utilizado;
        cin >> utilizado >> animal;
        total += utilizado;
        switch(animal){
            case 'R':
                utilizadoR += utilizado;
                break;
            case 'C':
                utilizadoC +=utilizado;
                break;
            case 'S':
                utilizadoS += utilizado;
                break;}
    }
    cout << "Total: " << total <<" cobaias"<<endl;
    cout <<"Total de coelhos: " <<utilizadoC<<endl;
    cout <<"Total de ratos: " <<utilizadoR<<endl;
    cout <<"Total de sapos: " <<utilizadoS<<endl;

    cout <<fixed<< setprecision(2);
    cout <<"Percentual de coelhos: " <<(static_cast<double>(utilizadoC)/total) *100<<" %"<<endl;
    cout <<"Percentual de ratos: "<<(static_cast<double>(utilizadoR)/total) *100<<" %"<<endl;
    cout <<"Percentual de sapos: "<<(static_cast<double>(utilizadoS)/total) *100<<" %"<<endl;
}