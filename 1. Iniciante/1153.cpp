#include <iostream>
using namespace std;

int main(){
    int N, somatorio=1;
    cin>>N;

    for(int i = N; i>=1; i--){
        somatorio *=i;
    }
    cout<<somatorio<<endl;
}