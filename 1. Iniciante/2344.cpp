#include <iostream>
using namespace std;

void conversao_nota(int N){
    if(N==0){
        cout<<"E"<<endl;
    }

    else if(N>0 && N<=35){
        cout<<"D"<<endl;
    }

    else if(N>35 && N<=60){
        cout<<"C"<<endl;
    }

    else if(N>60 && N<=85){
        cout<<"B"<<endl;
    }

    else{
        cout<<"A"<<endl;
    }
}

int main(){
    int N;
    cin>>N;

    conversao_nota(N);
}