#include <iostream>
#include <iomanip>
 using namespace std;

 int main(){
    int codigo;
    double quantidade;
    cin >>codigo >> quantidade;

    switch(codigo){
        case 1:
            quantidade *=4.0;
            break;
        case 2:
            quantidade *=4.5;
            break;
        case 3:
            quantidade *=5.0;
            break;
        case 4:
            quantidade *=2.0;
            break;
        case 5:
            quantidade *=1.5;
            break;
    }
    cout << fixed<< setprecision(2);
    cout <<"Total: R$ "<<quantidade<< endl;
 }