#include <iostream>
using namespace std;

int main(){
    while(true){
        int senha;
        cin>>senha;
        if(senha == 2002){
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        cout<<"Senha Invalida"<<endl;
    }
}