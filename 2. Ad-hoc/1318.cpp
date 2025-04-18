#include <iostream>
using namespace std;

int main(){
    int bilhetes, pessoas;
    
    while(cin>>bilhetes>>pessoas){

        if(bilhetes==0 && pessoas==0){
            break;
        }

        int tickets[10001] ={0};
        int clones=0;

        for(int i=0; i<pessoas; i++){
            int T;
            cin>>T;
            if(++tickets[T]==2){
                clones++;
            }
        }
        cout<<clones<<endl;
    }
}