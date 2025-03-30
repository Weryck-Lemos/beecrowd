#include <iostream>
using namespace std;

int main(){
    int S, T, F;
    cin>>S>>T>>F;

    int tempo_real = S+T+F;

    if(tempo_real>24){
        cout<<tempo_real-24<<endl;
    }

    else if(tempo_real<0){
        cout<<tempo_real+24<<endl;
    }

    else{
        cout<<tempo_real<<endl;
    }
}