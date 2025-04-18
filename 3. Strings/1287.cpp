#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin.tie(0)->sync_with_stdio(0);


    while(getline(cin,n)){
        string answer;
        bool possivel = true;
        size_t count =0;

        for(char c : n){

            if(c ==' '){
                count++;
            }
            
            if(isdigit(c)){
                answer.push_back(c);

            }

            else if(c=='o' || c=='O'){
                answer.push_back('0');
            }

            else if(c=='l'){
                answer.push_back('1');
            }

            else if(isalpha(c)){
                possivel = false;
                break;
            }
        }


        if(!possivel || count == n.size()){
            cout<<"error"<<endl;
        }

        else{
            long long int resp = stoll(answer);
            if(resp < 2147483647){
                cout<<resp<<endl;
            }
            else{
                cout<<"error"<<endl;
            }
        }
    }
}