#include <iostream>
using namespace std;

int main(){
    int N, in=0, out=0;
    cin>>N;

    int X[N];
    for(int i=0; i<N; i++){
        cin>>X[N];
        if(X[N]>=10 && X[N]<=20){
            in ++;
        }
        else out++;
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
}