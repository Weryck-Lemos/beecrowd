#include <iostream>
using namespace std;

int main(){
    int X, caso=1;

    while(cin>>X){
        int contagem=1;
        
        for(int i=0; i<=X; i++){
            contagem+=i;
        }

        cout<<"Caso "<<caso<<": ";
        
        if(contagem>1){
            cout<<contagem<<" numeros"<<endl;
            cout<<"0 ";
        }

        else{
            cout<<contagem<<" numero"<<endl;
            cout<<"0"<<endl;
        }
        for(int i=1; i<=X; i++){
            for(int j=0; j<i; j++){
                if(i==X && j==i-1){
                    cout<<i<<endl;
                }
                else{
                    cout<<i<<" ";
                }
            }
        
        }
        cout<<endl;
        caso++;

    }
}