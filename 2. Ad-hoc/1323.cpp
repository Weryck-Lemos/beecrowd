#include <iostream>
using namespace std;

int main(){
    while(true){
        double n;
        cin>>n;
        if(n==0){
            break;
        }

        double testes =(n * (n + 1) * (n * 2 + 1)) / 6;
        cout<<testes<<endl;
    }
}