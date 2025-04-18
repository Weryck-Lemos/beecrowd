#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salario;
    cin>>salario;
    cout<<fixed<<setprecision(2);
    if(salario<=2000) cout<<"Insento"<<endl;

    
    
    if(salario>2000 && salario<=3000){
        salario = salario-2000;
        cout<<"R$ "<<salario*0.08<<endl;
    }
    else if(salario>3000 && salario<=4500){
        salario = salario-3000;
        cout<<"R$ "<<80+(salario*0.18)<<endl;
    }
    else if(salario >4500){
        salario = salario-4500;
        cout<<"R$ "<<350+(salario*0.28)<<endl;
    }
}