#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valor;
    cin >> valor;
    cout << fixed << setprecision(2);
    int ValorEmCentavos = valor * 100;
    cout << "NOTAS:" << endl;

    int notas100 = ValorEmCentavos / 10000;
    ValorEmCentavos -= notas100 * 10000;
    cout << notas100 << " nota(s) de R$ 100.00" << endl;

    int notas50 = ValorEmCentavos / 5000;
    ValorEmCentavos -= notas50 * 5000;
    cout << notas50 << " nota(s) de R$ 50.00" << endl;

    int notas20 = ValorEmCentavos / 2000;
    ValorEmCentavos -= notas20 * 2000;
    cout << notas20 << " nota(s) de R$ 20.00" << endl;

    int notas10 = ValorEmCentavos / 1000;
    ValorEmCentavos -= notas10 * 1000;
    cout << notas10 << " nota(s) de R$ 10.00" << endl;

    int notas5 = ValorEmCentavos / 500;
    ValorEmCentavos -= notas5 * 500;
    cout << notas5 << " nota(s) de R$ 5.00" << endl;

    int notas2 = ValorEmCentavos / 200;
    ValorEmCentavos -= notas2 * 200;
    cout << notas2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;

    int moeda100 = ValorEmCentavos / 100;
    ValorEmCentavos -= moeda100 * 100;
    cout << moeda100 << " moeda(s) de R$ 1.00" << endl;

    int moeda50 = ValorEmCentavos / 50;
    ValorEmCentavos -= moeda50 * 50;
    cout << moeda50 << " moeda(s) de R$ 0.50" << endl;

    int moeda25 = ValorEmCentavos / 25;
    ValorEmCentavos -= moeda25 * 25;
    cout << moeda25 << " moeda(s) de R$ 0.25" << endl;

    int moeda10 = ValorEmCentavos / 10;
    ValorEmCentavos -= moeda10 * 10;
    cout << moeda10 << " moeda(s) de R$ 0.10" << endl;

    int moeda5 = ValorEmCentavos / 5;
    ValorEmCentavos -= moeda5 * 5;
    cout << moeda5 << " moeda(s) de R$ 0.05" << endl;

    int moeda1 = ValorEmCentavos;
    cout << moeda1 << " moeda(s) de R$ 0.01" << endl;
}
