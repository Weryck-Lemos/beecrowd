#include<iostream>
using namespace std;

int main(){
    unsigned int X,Y;

    while(cin>>X>>Y){
        unsigned int resultado = X^Y;
        cout<<resultado<<endl;
    }
}

//unsigned int result = a ^ b;: Esta linha calcula a soma sem “carry” 
//dos dois números usando o operador XOR (^). O operador XOR retorna 1 se os bits comparados 
//forem diferentes e 0 se forem iguais. Isso simula a soma sem “carry” porque, na soma binária, 
//um “carry” ocorre quando dois bits 1 são somados, mas o XOR ignora esse “carry”.