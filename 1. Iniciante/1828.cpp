#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=1; i<=N; i++){
        string sheldon, raj;
        cin>>sheldon>>raj;

        if(sheldon==raj){
            cout<<"Caso #"<<i<<": De novo!"<<endl;
        }

        else if(sheldon == "tesoura"&&raj=="papel" || sheldon=="papel"&&raj=="pedra" ||
        sheldon =="pedra"&& raj=="lagarto" || sheldon=="lagarto"&&raj=="Spock" ||
        sheldon=="Spock"&&raj=="tesoura" || sheldon=="tesoura"&&raj=="lagarto" ||
        sheldon=="lagarto"&&raj=="papel" || sheldon=="papel"&&raj=="Spock" ||
        sheldon=="Spock"&&raj=="pedra" || sheldon=="pedra"&&raj=="tesoura"){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }

        else{
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
    }
}