 #include <iostream>
using namespace std;

int main(){
    long long int M, N,somaM=1, somaN=1;
    while(cin>>M>>N){
        somaM=1;
        somaN=1;

        for(int i=1; i<M+1; i++){
            somaM *=i;
        }

        for(int j=1; j<N+1; j++){
            somaN *=j;
        }
        cout<<somaN+somaM<<endl;
    }
    return 0;
}

