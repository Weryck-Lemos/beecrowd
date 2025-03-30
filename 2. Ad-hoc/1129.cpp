#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int rep;
    

    while(cin>>rep){

        if(!rep)break;
        for(int x=0; x<rep; x++){

            int branco=0, ans=0;

            for(int i=0; i<5; i++){
                int cor;
                cin>>cor;

                if(cor<=127){
                    branco++;
                    ans = i;
                }
        
            }

            if(branco==1){
                cout<<char(ans+'A')<<"\n";
            }

            else{
                cout<<"*\n";
            }
        }
    }
}