#include <iostream>
using namespace std;

int main(){
    int N, inicio=1;
    cin>>N;

    for(int i=0; i<N; i++){
        cout<<inicio<<" "<<inicio+1<<" "<<inicio+2<<" PUM"<<endl;
        inicio+=4;    
    }
}