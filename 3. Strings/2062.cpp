#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    string answer;

    for(int i=0; i<n; i++){
        string x;
        cin>>x;

        if(x.size()==3){
            if(x[0]=='O' && x[1]=='B'){
                x[2] = 'I';
            }

            if(x[0]=='U' && x[1]=='R'){
                x[2] = 'I';
            }
            
        }

        answer +=x;
        if(i<n-1){
            answer +=" ";
        }
    }

    cout<<answer<<endl;
}