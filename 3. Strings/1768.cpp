#include <iostream>
using namespace std;

int main(){

    int n;
    while(cin>>n){

        for(int i= (n/2)+1; i<=n; i++){

            for(int j=0; j<i; j++){
                if(j < n-i)cout<<" ";
                else cout<<"*";
            }
            cout<<"\n";
        }

        for(int i=0; i<(n/2); i++){
            cout<<" ";
        }
        cout<<"*\n";


        for(int i=0; i<(n/2)-1; i++){
            cout<<" ";
        }
        cout<<"***\n\n";
        
    }

}