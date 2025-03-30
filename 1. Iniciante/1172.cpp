#include <iostream>
using namespace std;

int main(){
    int X[10];

    for(int i=0; i<10; i++){
        cin>>X[i];
    }
    for(int j=0; j<10; j++){
        if(X[j]<=0){
            cout<<"X["<<j<<"]"<<" = 1"<<endl;
        }
        else cout<<"X["<<j<<"]"<<" = "<<X[j]<<endl; 
    }
}