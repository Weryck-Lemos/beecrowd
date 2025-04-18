#include <iostream>
using namespace std;

int main(){
    long long int N[1000];
    int T, i=0;
    cin>>T;

    while(i<1000){
        for(int j=0; i<1000; j++){
            N[i]=j;
            cout<<"N["<<i<<"] = "<<N[i]<<endl;
            i++;
            if(j==T-1){
                j=-1;
            }
        }
    }
}