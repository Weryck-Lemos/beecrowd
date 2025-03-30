#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        long long int valor;
        int div=0;
        cin>>valor;
        for(long long int j=1; j<=valor; j++){
            if(valor%j==0){
                div++;
            }
        }

        if(div==2){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    }
}