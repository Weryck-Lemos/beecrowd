#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){

        int pos, x1, y1, x2, y2;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>pos;
                if(pos==2)x1=i, y1=j;
                else if(pos==1)x2=i, y2=j;
            }
        }

        int ans= abs(x1-x2)+ abs(y1-y2);
        cout<<ans<<"\n";
    }
}