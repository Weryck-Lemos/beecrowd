#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin>>N;

    vector<int> matricula(N);
    vector<double> nota(N);
    double maior_nota;
    int aluno;
    for(int i=0; i<N; i++){
        cin>>matricula[i]>>nota[i];
        if(i==0){
            aluno=matricula[0];
            maior_nota = nota[0];
        }
        else if(nota[i]>maior_nota){
            aluno=matricula[i];
            maior_nota= nota[i];
        }
    }

    if(maior_nota<8){
        cout<<"Minimum note not reached"<<endl;
    }

    else{
        cout<<aluno<<endl;
    }
}