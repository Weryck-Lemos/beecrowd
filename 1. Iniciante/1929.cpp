#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int valores[4];

    for(int i=0; i<4; i++){
        cin>>valores[i];
    }

    sort(valores, valores+4);

    if(valores[0]+valores[1]> valores[2] || valores[1]+valores[2]>valores[3]){
        cout<<"S"<<endl;
    }

    else{
        cout<<"N"<<endl;
    }
}