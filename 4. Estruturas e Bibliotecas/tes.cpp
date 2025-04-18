#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> n(5);
    for(int i=0; i<5; i++)
    {
        cin>>n[i];
    }
    
    auto t = lower_bound(n.begin(), n.end(), 4);
    cout<<t<<endl;
}