#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        int ano, ano_atual=2015;
        cin>>ano;

        if(ano_atual-ano>0){
            cout<<ano_atual-ano<<" D.C."<<endl;
        }

        else{
            cout<<abs(ano_atual-ano-1)<<" A.C."<<endl;
        }
    }   
}