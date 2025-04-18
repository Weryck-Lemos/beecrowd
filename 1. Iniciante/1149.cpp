#include <iostream>
using namespace std;

int main(){
    int A, N;
    cin>>A>>N;

    while(N<=0){
        cin>>N;
    }
    int soma=0;
        for(int i=0; i<N; i++){
            soma += (A+i);
        }
    cout<<soma<<endl;
    
}
