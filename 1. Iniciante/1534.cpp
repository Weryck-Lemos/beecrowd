#include <iostream>
using namespace std;

int main(){
    int N;
    while(cin>>N){
        int matriz[N][N];

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                matriz[i][j]=3;
            }
        }
        for(int i=0; i<N; i++){
            matriz[i][i]=1;
            matriz[i][N-i-1]=2;
        }

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout<<matriz[i][j];
            }

            cout<<endl;
        }        
    }
}