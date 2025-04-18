#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        int dias=0;
        double comida;
        cin>>comida;
        while(true){
            comida /=2;
            dias++;
            
            if(comida<=1.0){
                cout<<dias<<" dias"<<endl;
                break;
            }
        }
    }
}