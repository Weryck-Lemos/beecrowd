#include <iostream>
using namespace std;

int main(){
    int N[10], X;
    cin>>X;
    N[0]= X;
    cout<<"N[0] = "<<N[0]<<endl;

    for(int i=1; i<=9; i++){
        N[i] =N[i-1]*2;// Utilize N[i - 1] para obter o valor anterior e dobrá-lo
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
    
}