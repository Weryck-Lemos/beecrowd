#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;

    map<int,int> freq;

    vector<int> arr(n), ps(n);
    for(int i=0; i<n; i++)cin>>arr[i];

    long int ans=0;
    ps[0] = arr[0];

    for(int i=0; i<n; i++){
        if(i!=0) ps[i]= ps[i-1]+arr[i];

        if(ps[i]==k) ans++;

        ans+= freq[ps[i]-k];
        freq[ps[i]]++;
    }

    cout<<ans<<"\n";
}
