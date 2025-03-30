#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        int nota;
        cin>>nota;
        cout<<"resposta "<<i+1<< ": "<<nota<<endl;
    }
}