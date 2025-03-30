#include <iostream>
using namespace std;

int main(){
    double X,Y;
    cin>>X>>Y;
    if(Y>X){
        double temp=X;
        X=Y;
        Y=temp;
    }
    for(int i=Y+1; i<X; i++){
        if(i%5 ==2 || i%5==3){
            cout<<i<<endl;
        }
    }
}
