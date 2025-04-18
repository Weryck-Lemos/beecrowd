#include <bits/stdc++.h>
using namespace std;

vector<char> func(int n){
    vector<char> ans;

    for(char i='A'; i<='A'+n-1; i++) ans.push_back(i);

    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<char> ans = func(n);
    
    for(auto i: ans)cout<<i<<" ";
}