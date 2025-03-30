#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=2; i<N+1; i++){
        if(i%2 ==0){
            cout<<i<<"^2 = "<<i*i<<endl;
        }
    }
}