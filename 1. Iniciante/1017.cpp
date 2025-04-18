#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double tempo, velocidade;
    cin >> tempo >> velocidade;

    double distancia = tempo * velocidade;
    double Litros_consumidos = distancia /12;

    cout << fixed << setprecision(3);
    cout << Litros_consumidos << endl;
}