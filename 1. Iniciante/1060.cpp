#include <iostream>
using namespace std;

int main(){
    double valores[6];
    double positivo =0;

    for(int i=0; i<6; i++){
        cin>>valores[i];
        if(valores[i]>0){
            positivo++;
        }
    }
    cout<<positivo<<" valores positivos"<<endl;
}