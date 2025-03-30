#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, inicio=1;
    cin>>N;

    for(int i=0; i<N; i++){
        cout<<inicio<<" "<<pow(inicio,2)<<" "<<pow(inicio,3)<<endl;
        inicio++;
    }
}