#include <iostream>
using namespace std;

int main(){
    int valor1, valor2,soma=0;
    cin >> valor1 >>valor2;
    int maior =valor1, menor =valor2;

    if(valor2>valor1) {
        maior= valor2;
        menor =valor1;
    }
    
    for(int i=menor+1; i<maior; i++){
        if(i%2 !=0){
            soma +=i;
        }
    }

    cout<<soma<<endl;
}