#include <iostream>
using namespace std;

int main(){
    int N, m2=0, m3=0, m4=0, m5=0;
    cin>>N;

    for(int i=0; i<N; i++){
        int valor;
        cin>>valor;

        if(valor%2==0){
            m2++;
        }

        if(valor%3==0){
            m3++;
        }

        if(valor%4==0){
            m4++;
        }

        if(valor%5==0){
            m5++;
        }
    }

    cout<<m2<<" Multiplo(s) de 2"<<endl;
    cout<<m3<<" Multiplo(s) de 3"<<endl;
    cout<<m4<<" Multiplo(s) de 4"<<endl;
    cout<<m5<<" Multiplo(s) de 5"<<endl;
}