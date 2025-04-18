#include <bits/stdc++.h>
using namespace std;

int main(){
    string renas[9] = {"Dasher", "Dancer", "Prancer", "Vixen", 
    "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};

    int tot=0;

    for(int i=0; i<9; i++){
        int x;
        cin>>x;
        
        tot +=x;
    }

    int answer = tot%9;

    if(answer == 0){
        answer = 9;
    }    
    cout<<renas[answer-1]<<endl;

}