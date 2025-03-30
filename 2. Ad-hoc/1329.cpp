#include <iostream>
using namespace std;

int main(){
    while(true){
        int N,moeda, Mary=0, John=0;
        cin>>N;
        
        if(N==0){
            break;
        }

        for(int i=0; i<N; i++){
            cin>>moeda;
            if(moeda==0){
                Mary++;
            }
            else{
                John++;
            }
        }
        cout<<"Mary won "<<Mary<<" times and John won "<<John<<" times"<<endl;
    }
}