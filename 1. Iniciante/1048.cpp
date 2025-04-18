#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salario, novoSalario;
    cin>>salario;

    cout<< fixed<< setprecision(2);
    if(salario <= 400)novoSalario = salario*1.15;
    else if(salario<=800)novoSalario = salario*1.12;
    else if(salario<= 1200) novoSalario = salario*1.1;
    else if(salario <=2000) novoSalario = salario*1.07;
    else if(salario>2000) novoSalario =salario*1.04;

    double reajuste = (novoSalario - salario);
    double porcentagem = (reajuste/salario)*100;
    cout<<"Novo salario: "<<novoSalario<<endl;
    cout<<"Reajuste ganho: "<<reajuste<<endl;
    
    cout<< fixed<< setprecision(0);
    cout<<"Em percentual: "<<porcentagem<<" %"<<endl;
    
}