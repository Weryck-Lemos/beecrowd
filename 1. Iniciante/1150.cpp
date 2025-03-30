#include <iostream>
using namespace std;

int main(){
    int X,Z=0, soma=0,saida=0 ;
    cin>>X;
    while(X>=Z){
        cin>>Z;
    }
    for(int i=X; ; i++){
        soma+=i;
        saida++;
        if(soma>Z){
            break;
        }

    }
    cout<<saida<<endl;
}