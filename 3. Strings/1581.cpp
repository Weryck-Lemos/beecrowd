#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int rep;
    cin>>rep;

    while(rep--){
        int n;
        cin>>n;

        string str, ant="";
        bool english = false;

        for(int i=0; i<n; i++){
            cin>>str;
            if(i==0){
                ant=str;
            }

            else{
                if(str!=ant)english= true;
            }
        }

        if(english)cout<<"ingles\n";
        else cout<<str<<"\n";
    }
}