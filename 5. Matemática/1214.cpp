#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int C, count=0;
    cin>>C;

    while(count<C){
        int N;
        cin>>N;
        double notas[N], aprovado=0, total=0;

        for(int i=0; i<N; i++){
            cin>>notas[i];
            total+=notas[i];

        }

        double media= total/N;

        for(int i=0; i<N; i++){
            if(notas[i]>media){
                aprovado++;
            }
        }

        cout<<fixed<<setprecision(3);
        cout<<(aprovado/N)*100<<"%"<<endl;


        count++;
    }
}