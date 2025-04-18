#include <iostream>
using namespace std;

int main(){
    int valores[5], par=0;

    for(int i=0; i<5; i++){
        cin>>valores[i];
        if(valores[i]%2 ==0){
            par++;
        }
    }
    cout<<par<<" valores pares"<<endl;
}