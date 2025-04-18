#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long double N[100];
    double X, div=2;
    cin>>X;
    N[0]=X;

    cout<<fixed<<setprecision(4);
    cout<<"N[0] = "<<N[0]<<endl;
    for(int i=1; i<100; i++){
        N[i]= X/div;
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
        div *=2;
        
    }
}