#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    while(N<0 || N>46){
        cin>>N;
    }
    long long int anterior=0, atual=1, proximo;
    for(int i=1; i<=N; i++){
        if(i==1){
            cout<<anterior;
        }
        else if(i==2){
            cout<<" "<<atual;
        }
        else{
            proximo= anterior+atual;
            cout<<" "<<proximo;
            anterior=atual;
            atual=proximo;
        }
        
    }
    cout<<endl;
}