#include <bits/stdc++.h>
using namespace std;

int main(){
    int rep, casa=0, escritorio=0, gc=0, ge=0;
    cin>>rep;

    while(rep--){
        string ida, volta;
        cin>>ida>>volta;

        if(ida=="chuva" && gc==0){
            casa++;
            ge++;
        }
        else if(ida=="chuva" && gc>0){
            gc--;
            ge++;
        }
        if(volta=="chuva" && ge==0){
            escritorio++;
            gc++;
        }
        else if(volta=="chuva" && ge>0){
            ge--;
            gc++;
        }
    }

    cout<<casa<<" "<<escritorio<<"\n";
}