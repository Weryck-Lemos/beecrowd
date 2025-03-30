#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool veriq(const string& expressao){
    stack<char> parenteses;

    for(char c : expressao){
        if(c == '('){
            parenteses.push(c);
        }
        else if(c == ')'){
            if(parenteses.empty() || parenteses.top() !='('){
                return false;
            }
            parenteses.pop();
        }
    }
    return parenteses.empty();
}

int main(){
    string expressao;
    while(getline(cin, expressao)){

        if(veriq(expressao)){
            cout<<"correct"<<endl;
        }
        else{
            cout<<"incorrect"<<endl;
        }
    }

}