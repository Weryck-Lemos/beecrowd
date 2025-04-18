#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A,B,C;
    cin >> A >> B >> C;
    double maior = A;

    if (B > maior) maior = B;
    if (C > maior) maior = C;

    cout << maior << "eh o maior"<< endl;
}