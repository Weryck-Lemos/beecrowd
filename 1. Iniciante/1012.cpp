#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double A,B,C;
    cin >> A >> B >> C;
    double a = (A*C)/2;
    double b = 3.14159* pow(C,2);
    double c = (A+B)*C/2;
    double d = pow(B,2);
    double e = A*B;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << a << endl;
    cout << "CIRCULO: " << b  << endl;
    cout << "TRAPEZIO: " << c << endl;
    cout << "QUADRADO: " << d << endl;
    cout << "RETANGULO: " << e << endl;
}