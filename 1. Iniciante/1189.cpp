#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char op;
    cin>>op;
    double matriz[12][12], soma=0, count=0;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin>>matriz[i][j];
            if(i>j && i<11-j){
                soma+=matriz[i][j];
                count++;

            }
        }
    }
    cout<<fixed<<setprecision(1);
    if(op =='S'){
        cout<<soma<<endl;
    }
    else{
        cout<<soma/count<<endl;
    }
}