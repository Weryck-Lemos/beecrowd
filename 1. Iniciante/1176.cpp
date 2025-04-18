#include <iostream>
using namespace std;

int main(){
    long long int N[61], repeticao;
    N[0]=0, N[1]=1;
    cin>>repeticao;
    for(int i=2; i<=60; i++){
            N[i]= N[i-2]+N[i-1];
        }
        
    while(repeticao!=0){
        int X;
        cin>>X;

        cout<<"Fib("<<X<<") = "<<N[X]<<endl;
        repeticao--;
    }
}