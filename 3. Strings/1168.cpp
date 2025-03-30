#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string led;
        cin>>led;

        int count_led=0;

        for(char c : led){
            if(c == '1'){
                count_led+=2;
            }

            if(c=='7'){
                count_led+=3;
            }

            if(c=='4'){
                count_led+=4;
            }

            if(c== '2' || c=='3' || c=='5'){
                count_led+=5;
            }

            if(c=='0' || c=='6' || c=='9'){
                count_led+=6;
            }

            if(c=='8'){
                count_led+=7;
            }

        }

        cout<<count_led<<" leds"<<endl;
    }
}