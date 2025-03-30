#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    char op;
    cin>>op;
    double Matriz[12][12], soma=0, count=0;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin>>Matriz[i][j];
        }
    }

    for(int i=1; i<12; i++){
        for(int j=i+1 ; j<12; j++){
            soma+=Matriz[i][j];
            count++;

        }

    }
    cout<<fixed<<setprecision(1);
    if(op=='S'){
        cout<<soma<<endl;
    }
    else{
        cout<<soma/count<<endl;
    }
}