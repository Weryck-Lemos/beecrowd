#include <iostream>
using namespace std;

int main(){
    int N, count=0;
    cin>>N;

    while(count<N){
        string nome1, nome2, escolha1, escolha2;
        int N1, N2; 

        cin>>nome1>>escolha1>>nome2>>escolha2;
        cin>>N1>>N2;
        int total = N1+N2;

        if((escolha1=="PAR" && total%2==0) || (escolha1=="IMPAR" && total%2!=0)){
           cout<<nome1<<endl;
        }
        else{
            cout<<nome2<<endl;
        }
        count++;
    }
}