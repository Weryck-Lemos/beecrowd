#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        string nome;
        int forca;

        cin>>nome>>forca;

        if(nome== "Thor"){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
}