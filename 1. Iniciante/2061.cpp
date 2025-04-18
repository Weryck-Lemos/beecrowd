#include <iostream>
using namespace std;

int main(){
    int abas,N;
    cin>>abas>>N;

    for(int i=0; i<N; i++){
        string acao;
        cin>>acao;
        if(acao=="fechou"){
            abas++;
        }

        else{
            abas--;
        }
    }

    cout<<abas<<endl;
}