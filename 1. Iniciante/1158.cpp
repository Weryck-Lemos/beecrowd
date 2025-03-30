#include <iostream>
using namespace std;

int main(){
    int N; 
    cin>>N;

    for(int i=0; i<N; i++){
        int X,Y;
        int soma=0, count=0; //dentro do for para poder reniciar :)
        cin>>X>>Y;
        while(count<Y){
            if(X%2 !=0){
                soma+=X;
                count++;
            }
            
            X++;
        }


        
        cout<<soma<<endl;
    }
}