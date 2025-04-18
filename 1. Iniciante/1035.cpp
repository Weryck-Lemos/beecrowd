#include <iostream>
using namespace std;

int main(){
    int a,b,c,d; cin>>a>>b>>c>>d;

    if(b>c && d>a && (c+d)>(a+b)) cout<<"Valores aceitos"<<endl;
    else cout<<"Valores nao aceitos"<<endl;
}