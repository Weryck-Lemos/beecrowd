#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int L;
    char T;
    double M[12][12], soma=0.0, count=0;
    cin>>L>>T;

    for(int i=0; i<12; i++){
        for(int j=0; j <12; j++){
            cin>>M[i][j];
        }
    }

    cout<<fixed<<setprecision(1);

    for(int j=0; j<12; j++){
        soma+=M[L][j];
        count++;
    }

    if(T =='S'){
        cout<<soma<<endl;
    }
    else if(T== 'M'){
        double media = soma/count;
        cout<<media<<endl;
    }

}