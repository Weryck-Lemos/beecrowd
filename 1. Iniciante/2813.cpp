#include <iostream>

using namespace std;

int main(){
    int N, casa=0, trabalho=0, gc_casa=0, gc_trabalho=0;
    cin>>N;
    
    for(int i=0; i<N; i++){
        string ida, volta;
        cin>> ida>> volta;

        if(ida=="chuva"){
            if(casa==0){
                gc_casa++;
            }
            else if(casa !=0){
                casa--;
            }
            trabalho++;
            
        }

        if(volta=="chuva"){
            if(trabalho==0){
                gc_trabalho++;
            }
            else if(trabalho !=0){
                trabalho--;
            }
            casa++;
        }
        

        
    } 
    cout<<gc_casa<<" "<<gc_trabalho<<endl;  
}