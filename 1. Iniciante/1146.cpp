#include <iostream>
using namespace std;

int main(){
    while(true){
        int X;
        cin>>X;
        if(X==0){
            break;
        }
        for(int i=1; i<=X; i++){
            cout<<i;
            if (i<X){
                cout<<" ";
            }
            else if(i==X){
                cout<<endl;
            }
        }
    }
}