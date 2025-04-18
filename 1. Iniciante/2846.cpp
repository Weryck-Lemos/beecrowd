#include <bits/stdc++.h>
using namespace std;

bool isfib (int n){
    int a = 1, b = 1;
    while(b<n){
        int temp = b;
        b = a + b;
        a = temp;
    }

    return b == n;
}

int findfib(int k){
    int count = 0;
    int num = 1;

    while(true){
        if(!isfib(num)){
            count++;
            if(count==k){
                return num;
            }
        }
        num++;
    }
}

int main(){
    int k;
    cin>>k;

    int kfib = findfib(k);
    cout<<kfib<<endl;
}