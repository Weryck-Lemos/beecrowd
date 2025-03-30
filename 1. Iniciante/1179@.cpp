#include <iostream>

using namespace std;

int main(){
    int par[5], impar[5];
    int count=0, p=0, i=0;
    while(count<15){
        int X;
        cin>>X;
        if(X%2==0){
            par[p]=X;
            p++;
            if(p==5){
                for(int j=0; j<5; j++){
                    cout<<"par["<<j<<"] = "<<par[j]<<endl;
                }
                p=0;
            }
        }
        else{
            impar[i]=X;
            i++;
            if(i==5){
                for(int j=0; j<5; j++){
                    cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
                }
                i=0;
            }
            
        }

        count++;
    }
    for(int j=0; j<i; j++){
        cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
    }
     for(int j = 0; j < p; j++) {
        cout << "par[" << j << "] = " << par[j] <<endl;
    }
}