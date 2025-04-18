#include <iostream>
using namespace std;

int main(){
    int dia1, dia2, dia3;
    cin>>dia1>>dia2>>dia3;

    if((dia1>dia2 && dia3>=dia2 )|| (dia1<dia2 && dia3>dia2 && (dia2-dia1<=dia3-dia2)) || (dia1>dia2 && dia2>dia3 &&(dia2-dia3<dia1-dia2)) || (dia1 == dia2 && dia2<dia3)){
        cout<<":)"<<endl;

    }

    else {
        cout<<":("<<endl;
    }
}