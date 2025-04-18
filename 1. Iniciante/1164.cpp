#include <iostream>
using namespace std;

int main(){
    int N, count=0;
    cin>>N;

    while(count<N){
        int X, soma=0;
        cin>>X;
        for(int i=1; i<X; i++){
            if(X%i ==0){
                soma+=i;
            }
        }
        if(soma==X){
            cout<<X<<" eh perfeito"<<endl;
        }
        else cout<<X<<" nao eh perfeito"<<endl;


        count++;
    }

}