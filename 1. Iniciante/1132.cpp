#include <iostream>
using namespace std;

int main(){
    double X,Y, soma;
    cin>>X>>Y;
    
    //garantir que X sempre seja maior :)
    if(Y>X){
        double guarda;
        guarda=Y;
        Y=X;
        X=guarda;

    }
    for(int i=Y; i<X+1; i++){
        if(i%13 !=0){
            soma +=i;
        }
    }
    cout<<soma<<endl;
}