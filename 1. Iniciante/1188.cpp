#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double matriz[12][12], soma=0, todo=0;
    char op;
    cin>>op;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin>>matriz[i][j];
            if(i>j && j>11-i){
                soma+=matriz[i][j];
                todo++;
            }
        }
    }
    cout<<fixed<<setprecision(1);
    if(op =='S'){
        cout<<soma<<endl;
    }
    else{
        cout<<soma/todo<<endl;
    }
}