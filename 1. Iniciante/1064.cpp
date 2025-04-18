#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double valores[6], todo, positivo=0;

    for(int i=0; i<6; i++){
        cin>>valores[i];
        if(valores[i]>0){
            todo +=valores[i];
            positivo++;
        }

    }
    cout<<positivo<<" valores positivos"<<endl;
    cout<<fixed<< setprecision(1);
    cout<<(todo/positivo)<<endl;
}