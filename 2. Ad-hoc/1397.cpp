#include <iostream>
using namespace std;

int main(){
    int N;
    while(cin>>N){
        if(N==0){
            break;
        }
        int jogador1=0, jogador2=0;
        for(int i=0; i<N; i++){
            int num1, num2;
            cin>>num1>>num2;

            if(num1>num2){
                jogador1++;
            }

            else if(num2>num1){
                jogador2++;
            }
            num1=0, num2=0;
        }
        cout<<jogador1<<" "<<jogador2<<endl;
    }
}
