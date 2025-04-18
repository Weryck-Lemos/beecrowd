#include <iostream>
using namespace std;

int main(){
    int N, caiu=0;
    cin>>N;
    int velocidade[N];
    cin>>velocidade[0];

    for(int i=1; i<N; i++){
        cin>>velocidade[i];
        if(velocidade[i]<velocidade[i-1]){
            caiu= i+1;
            break;
        }
    }

    cout<<caiu<<endl;
}