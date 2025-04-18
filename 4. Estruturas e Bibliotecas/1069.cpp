#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string entrada;
        cin>>entrada;

        stack<char> diamante;
        int total_diamantes = 0;

        for(char c : entrada){
            if(c == '<'){
                diamante.push(c);
            }
            else if(c == '>' && !diamante.empty() && diamante.top() == '<' ){
                diamante.pop();
                total_diamantes++;
            }
        }

        cout<<total_diamantes<<endl;
    }
}