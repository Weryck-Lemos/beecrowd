#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin>>n){
        double menor = 0;

        for(int i=0; i<n; i++){
            double x;
            cin>>x;

            if(i==0){
                menor = x;
            }

            if(menor>x){
                menor = x;
            }
        }

        cout<<fixed<<setprecision(2)<<menor<<endl;
    }
}