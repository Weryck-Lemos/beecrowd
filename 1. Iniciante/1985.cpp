#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N, count=0;
    double total=0;
    cin>>N;

    while(count<N){
        int produto, quantidade;
        cin>>produto>>quantidade;

        for(int i=0; i<quantidade; i++){
            if(produto==1001){
                total+=1.5;
            }

            else if(produto==1002){
                total+=2.5;
            }

            else if(produto==1003){
                total+=3.5;
            }

            else if(produto==1004){
                total+=4.5;
            }

            else if(produto==1005){
                total+=5.5;
            }
        }

        count++;
    }

    cout<<fixed<<setprecision(2);
    cout<<total<<endl;
}