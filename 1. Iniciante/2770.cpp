#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, m;

    while(cin>>x>>y>>m){
        for(int i=0; i<m; i++){
            int xi, yi;
            cin>>xi>>yi;

            if(xi<=x && yi <= y || xi<=y && yi<=x){
                cout<<"Sim"<<endl;
            }

            else{
                cout<<"Nao"<<endl;
            }
        }
    }
}