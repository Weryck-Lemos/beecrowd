#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, idx=0;
    cin>>n;

    vector<int> pos = {100,50,25,10,5,3,1};

    if(n<=1)idx++;
    if(n<=3)idx++;
    if(n<=5)idx++;
    if(n<=10)idx++;
    if(n<=25)idx++;
    if(n<=50)idx++;

    cout<<"Top "<<pos[idx]<<"\n";
}