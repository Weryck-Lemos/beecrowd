#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    
    int rep;
    cin>>rep;

    while(rep--){
        int n, ans=0;
        cin>>n;

        for(int i=0; i<n; i++){
            string str;
            cin>>str;

            for(size_t j=0; j<str.size(); j++){
                ans += i + j + str[j]-'A'; 
            }
        }

        cout<<ans<<"\n";
    }
}