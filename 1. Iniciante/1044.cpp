#include <iostream>
using namespace std;

int main(){
    int v1, v2;
    cin>>v1>>v2;
    
    if(v1%v2 == 0 || v2%v1==0) cout<<"Sao Multiplos"<<endl;
    else cout<<"Nao sao Multiplos"<<endl;
}