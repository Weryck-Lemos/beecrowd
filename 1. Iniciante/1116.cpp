#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        double X,Y;
        cin>>X>>Y;
        cout<<fixed<<setprecision(1);
        if(Y==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
        double div= X/Y;
        cout<<div<<endl; 
        }
    }
}