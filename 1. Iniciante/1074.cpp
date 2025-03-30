#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int valores[N];

    for(int i=0; i<N; i++){
        cin>>valores[N];
        if(valores[N]==0){
            cout<<"NULL"<<endl;}
        else if(valores[N]%2 ==0){
            cout<<"EVEN";
        }
        else cout<<"ODD";

        if(valores[N]>0){
            cout<<" POSITIVE"<<endl;
        }
        else if(valores[N]<0){
            cout<<" NEGATIVE"<<endl;
        }
    }
}