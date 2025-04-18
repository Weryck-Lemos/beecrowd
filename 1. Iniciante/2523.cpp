#include <bits/stdc++.h>
using namespace std;

int main(){
    string vet;
    
    while(cin>>vet){
        int n;
        cin>>n;

        string ans ="";

        while(n--){
            int idx;
            cin>>idx;
            ans+= vet[idx-=1];
        }

        cout<<ans<<"\n";
    }
}