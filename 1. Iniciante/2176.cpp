#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;

    int count1= 0, pos=0;

    while((pos = n.find('1', pos)) != string::npos){
        count1++;
        pos+=1;
    }

    if(count1 %2==0){
        cout<<n+'0'<<endl;
    }

    else{
        cout<<n+'1'<<endl;
    }

}