#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int N;
    char op;
    double Matriz [12][12], soma=0;
    cin>>N>>op;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin>>Matriz[i][j];
        }
    }

    for(int i=0; i<12; i++){
        soma +=Matriz[i][N];
    }
    
    cout<<fixed<<setprecision(1);
    if(op=='S'){
        cout<<soma<<endl;
    }

    else{
        cout<<soma/12<<endl;
    }

}