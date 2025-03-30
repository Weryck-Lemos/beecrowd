#include <iostream>
using namespace std;

int main(){
    int N[100], maior,posicao;

    for(int i=0; i<100; i++){
        cin>>N[i];
        if(i==0 || N[i]>maior){
            maior=N[i];
            posicao=i;
        }
    }
    cout<<maior<<endl<<posicao+1<<endl;
}