#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int rep,n,m;

    while(cin>>rep){
        if(!rep)break;

        cin>>n>>m;
        for(int i=0; i<rep; i++){
            int x,y;
            cin>>x>>y;

            if(x==n || y==m)cout<<"divisa\n";
            else if(x>n && y>m)cout<<"NE\n";
            else if(x>n && y<m)cout<<"SE\n";
            else if(x<n && y<m)cout<<"SO\n";
            else cout<<"NO\n";

        }
    }
}