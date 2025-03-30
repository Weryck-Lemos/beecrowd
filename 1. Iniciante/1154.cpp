#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double N, soma=0,contador=0;
    cin>>N;  
    while(true){
        if(N<0){
            break;
        }  
        soma+=N;  
        cin>>N;
        contador++;

    

    }

    cout<<fixed<<setprecision(2);
    cout<<soma/contador<<endl;
}