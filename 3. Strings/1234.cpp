#include <bits/stdc++.h>
using namespace std;

int main(){
    string text;

    while(getline(cin, text)){
        bool caps = true;


        /*o '&' representa um ponteiro, ou seja, qualquer 
        alteração em c também vai altera a string text*/
        
        for(char& c : text){
            if(isalpha(c)){
                if(caps){
                    c = toupper(c);
                }
                else{
                    c = tolower(c);
                }

                caps = !caps;
            }
        }

        cout<<text<<endl;
    }
}