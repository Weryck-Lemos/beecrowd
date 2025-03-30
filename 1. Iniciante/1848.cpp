#include <iostream>
using namespace std;

int main(){
    string a;
    int count=0, soma=0;
    while(count<3){
        
        getline(cin,a);//para ler a linha inteira já que tem um epaço entre os caracteres
        if(a=="caw caw"){
            count++;
            cout<<soma<<endl;
            soma=0;
        }

        //binario de cada código.
        else{
            if(a[0]=='*') soma+=4;
            if(a[1]=='*') soma+=2;
            if(a[2]=='*') soma+=1;
        }
        

    }
}