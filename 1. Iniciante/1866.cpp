#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int count=0;

    while(count<N){
        int valor, soma=0;
        cin>> valor;

        for(int i=1;  i<=valor; i++){
            if(i%2 !=0){
                soma++;
            }
            else{
                soma--;
            }
        }
        cout<<soma<<endl;

        count++;
    }
}