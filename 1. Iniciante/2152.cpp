#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin>>N;
    
    for(int i=0; i<N; i++){
        int hora, minuto, abriu;
        cin>>hora>>minuto>>abriu;

        cout<<setw(2)<<setfill('0')<<hora<<":";
        cout<<setw(2)<<setfill('0')<<minuto<<" - ";

        if(abriu==1){
            cout<<"A porta abriu!"<<endl;
        }

        else{
            cout<<"A porta fechou!"<<endl;
        }
    }
}