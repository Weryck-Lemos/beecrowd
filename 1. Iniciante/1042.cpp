#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int numeros[3], numerosOrd[3];

    for(int i=0; i<3;i++){
        cin>> numeros[i];
        numerosOrd[i]= numeros[i];
    }
    

    sort(numerosOrd, numerosOrd+3);

    for(int i=0 ;i<3;i++){
        cout<<numerosOrd[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<numeros[i]<<endl;
    }
}
