#include <iostream>
using namespace std;

int main(){
    int produtos, alcool=0, gasolina=0, diesel=0;
    while(true){
        
        while(true){
            cin>>produtos;
            if(produtos==1 ||produtos==2 || produtos==3 || produtos==4){
                break;
            }
        }
        if(produtos==4){
            break;
        }
        else if(produtos==1){
            alcool++;
        }
        else if(produtos==2){
            gasolina++;
        }
        else if(produtos==3){
            diesel++;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alcool<<endl;
    cout<<"Gasolina: "<<gasolina<<endl;
    cout<<"Diesel: "<<diesel<<endl;
}