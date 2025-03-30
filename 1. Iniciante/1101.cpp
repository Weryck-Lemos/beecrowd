#include <iostream>
using namespace std;

int main(){
    int soma=0;
    while(true){
        int M,N;
        cin>>M>>N;
        int guardar=N;

        if(M<=0 || N<=0){
            break;
        }
        
        if(N>M){
            guardar=M;
            M=N;
            N=guardar;    
        }
        for(int j= N; j<M+1; j++){
            soma+=j;
            cout<<j<<" ";  
        }
        cout<<"Sum="<<soma<<endl;

        soma=0;
    }
}