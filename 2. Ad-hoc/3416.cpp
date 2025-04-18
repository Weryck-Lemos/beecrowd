#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double N,L,D;
    cin>>N>>L>>D;

    double consumo = N*(D/1000);
    if(consumo<=L){
        cout<<L<<endl;
    }
    else{
        int extra = ceil(consumo/L);
        cout<<extra*L<<endl;
    }
}