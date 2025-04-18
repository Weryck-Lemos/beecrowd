#include <iostream>
using namespace std;

int main(){
    int N,X,Y,guardar,soma=0;
    cin>>N;


    for(int i=0; i<N; i++){
        cin>>X>>Y;
        soma=0;

        //X sempre sera maior que Y
        if(Y>X){
            guardar=Y;
            Y=X;
            X=guardar;
        }
        for(int j=Y+1; j<X; j++){
            if(j%2 !=0){ 
                soma+=j;
                
                }
            }
        
    cout<<soma<<endl;
    }
}