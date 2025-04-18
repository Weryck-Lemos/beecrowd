#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, count = 1;
    while(cin>>n && n!=0){
        char op;
        
        int tot;
        cin>>tot;

        for(int i=1; i<n; i++){
            cin>>op;

            int num;
            cin>>num;

            if(op=='+'){
                tot += num;
            }

            else if(op =='-'){
                tot -=num;
            }

        }
        cout<<"Teste "<<count<<endl;
        cout<<tot<<endl<<endl;;

        count++;
    }
}