#include <iostream>
using namespace std;

int main(){
    int N, defice=0;
    cin>>N;

    for(int i=0; i<N; i++){
        char T;
        int C;

        cin>>T>>C;

        if(T=='G'){
            defice-=C;
        }

        else{
            defice+=C;
        }
    }

    if(defice>=0){
        cout<<"A greve vai parar."<<endl;
    }

    else{
        cout<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
    }
}