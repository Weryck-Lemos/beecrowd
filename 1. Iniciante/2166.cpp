#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin>>N;

    double raiz= 2.0;
    for(int i=0; i<N; i++){
        raiz= 2.0 + 1.0/raiz;
    }

    raiz -=1;

    cout<<fixed<<setprecision(10);
    cout<<raiz<<endl;

}