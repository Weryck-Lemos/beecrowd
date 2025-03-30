#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    if(n<10)cout<<n<<"\n";
    else{
        for(int i=1; i<=n; i++){
            string s= to_string(i);
            ans+= s.size();
        }

        cout<<ans<<"\n";
    }
}