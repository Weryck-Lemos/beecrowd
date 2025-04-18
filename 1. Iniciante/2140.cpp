#include <iostream>
#include <vector>
using namespace std;

int main(){
    double N,M;
    vector<double> cedulas={100, 50, 20, 10, 5, 2};
    while(true){
        cin>>N>>M;
        if(N==0 && M==0){
            break;
        }


        double troco = M-N;
        bool possible = false;

        for(int i=0; i<6; i++){
            for(int j=i; j<6; j++){
                if(cedulas[i]+cedulas[j]==troco){
                    possible=true;
                    break;
                }
            }
            if(possible) break;
        }

        if(possible){
            cout<<"possible"<<endl;
        }

        else{
            cout<<"impossible"<<endl;
        }
    }
}