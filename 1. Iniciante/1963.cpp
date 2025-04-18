#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double valor_antigo, valor_atual;
    cin>>valor_antigo>>valor_atual;

    double aumento = valor_atual-valor_antigo;
    cout<<fixed<<setprecision(2)<<(aumento/valor_antigo)*100<<"%"<<endl;
}