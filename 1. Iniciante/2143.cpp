#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    while(cin>>n && n!=0){
        for(int i=0; i<n; i++){
            int t;
            cin>>t;
            if(t%2==0){
                cout<<(t*2)-2<<endl;
            }

            else{
                cout<<(t*2)-1<<endl;
            }
            
        }
    }
}