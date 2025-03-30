#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<fixed<<setprecision(2);
    double x,n1,y,n2;
    while(true){

        cin>>x;
        if(x>=0 && x<=10){
            n1=x;
            break;
        }
        else cout<<"nota invalida"<<endl;
    }
    while(true){
        cin>>y;
        if(y>=0 && y<=10){
            n2=y;
            break;
        }
        else cout<<"nota invalida"<<endl;
    }
    double media = (n1+n2)/2;
    cout<<"media = "<<media<<endl;
}