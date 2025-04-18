#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int valor;
    cin >> valor;
    cout << valor << endl;

    int notas100 = valor/100;
    valor %=100;
    cout << notas100 << " nota(s) de R$ 100,00" << endl;

    int notas50 = valor/50;
    valor %=50;
    cout << notas50 << " nota(s) de R$ 50,00"<< endl;

    int nota25 = valor/20;
    valor %=20;
    cout << nota25 << " nota(s) de R$ 20,00" << endl;

    int nota10 = valor/10;;
    valor %=10;
    cout << nota10 << " nota(s) de R$ 10,00" << endl;

    int nota5 = valor/5;
    valor %=5;
    cout << nota5 << " nota(s) de R$ 5,00" << endl;

    int nota2 = valor/2;
    valor %=2;
    cout << nota2 << " nota(s) de R$ 2,00" << endl;

    int nota1 = valor/1;
    valor %=1;
    cout << nota1 << " nota(s) de R$ 1,00" << endl;
}