#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A[100];
    for(int i=0; i<100; i++){
        cin>>A[i];

        if(A[i]<=10){
            cout<<fixed<<setprecision(1);
            cout<<"A["<<i<<"] = "<<A[i]<<endl;
        }
    }
}