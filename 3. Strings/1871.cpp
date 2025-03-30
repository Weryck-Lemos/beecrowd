#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    while(cin>>n1>>n2 && n1 !=0 && n2 !=0){
        int soma = n1+n2;

        string valor = to_string(soma);

        string answer;

        for(char c : valor){
            if(c != '0'){
                answer.push_back(c);
            }
        }

        cout<<answer<<endl;
    }
}