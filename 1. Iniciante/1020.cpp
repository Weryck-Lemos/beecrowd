#include <iostream>
using namespace std;

int main(){
    int dias;
    cin >> dias;

    int ano = dias/365;
    dias %=365;
    cout << ano <<" ano(s)" << endl;

    int meses = dias/30;
    dias %=30;
    cout << meses <<" mese(es)" << endl;

    cout << dias <<" dia(s)"<< endl;
}