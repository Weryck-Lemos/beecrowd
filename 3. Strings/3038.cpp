#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;

    while(getline(cin, str)){
        string ans="";
        for(char i : str){
            if(i=='@')ans.push_back('a');
            else if(i=='&') ans.push_back('e');
            else if(i=='!')ans.push_back('i');
            else if(i=='*')ans.push_back('o');
            else if(i=='#') ans.push_back('u');
            else ans.push_back(i);
        }
        cout<<ans<<"\n";
    }
}