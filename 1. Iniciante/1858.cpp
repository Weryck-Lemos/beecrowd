#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int T[N];
    for(int i=0; i<N; i++){
        cin>>T[i];
    }

    int minT = T[0];
    int pessoas =1;

    for(int i =1; i<N; i++){
        if(T[i]< minT){
            minT= T[i];
            pessoas = i+1;
        }
    }

    cout<<pessoas<<endl;

    
}