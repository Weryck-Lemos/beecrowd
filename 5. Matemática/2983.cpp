#include <bits/stdc++.h>
using namespace std;

bool ehprimo(int n){

    if(n<=1){
        return false;
    }

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main(){

    int n;
    cin>>n;
    set<int> num;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        if(ehprimo(x)){
            num.insert(x);
        }
    }


    cout<<num.size()<<endl;
    
    for(auto i = num.begin(); i != num.end(); i++){
        if( i!= num.begin()){
            cout<<", ";
        }

        cout<<*i;
        
    }
    if(num.size()>0){
        cout<<"."<<endl;
        return 0;
    }

    cout<<endl;
    
    
}