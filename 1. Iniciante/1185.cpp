#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i, j;
    double M[12][12], sum = 0;
    char op;
    cin >> op;

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];
            if(j<11-i){
                sum+=M[i][j];
            }
        }
    }

    cout<<fixed<<setprecision(1);

        
    
        if(op=='S'){
            cout<<sum<<endl;
        }
        else{
            cout<<sum/((12*12 -12)/2.0)<<endl;
        }
        
    }


