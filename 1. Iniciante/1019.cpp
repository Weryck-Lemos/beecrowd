#include <iostream>
using namespace std;

int main(){
    int tempo;
    cin >> tempo;
    
    int hora = tempo/3600;
    tempo %=3600;
    cout << hora;

    int minuto = tempo/60;
    tempo %=60;
    cout <<":"<<minuto;

    cout << ":" <<tempo<< endl;
}