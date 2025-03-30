#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        int poder;
        cin>>poder;
        if(poder>8000){
            cout<<"Mais de 8000!"<<endl;
        }

        else{
            cout<<"Inseto!"<<endl;
        }
    }
}