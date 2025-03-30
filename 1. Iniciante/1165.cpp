#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        int X, count=0;
        cin>>X;
        for(int j=1; j<=X; j++){
            if(X%j ==0){
                count++;
            }
        }
        if(count==2){
            cout<<X<<" eh primo"<<endl;
        }
        else{
            cout<<X<<" nao eh primo"<<endl;
        }
    }
}