#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double N1,N2,N3,N4;
    cin >> N1 >> N2 >> N3 >> N4;
    double media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;

    cout<<fixed<<setprecision(1);

    if(media>=7){
        cout<<"Media: "<< media <<endl;
        cout <<"Aluno aprovado." <<endl;
        }

    else if(media<5){
        cout<<"Media: "<< media <<endl;
        cout<<"Aluno reprovado." <<endl;
        }

    else if(media >=5 && media<7){
        float notaexame, mediaexame;
        cin >> notaexame;

        mediaexame = (media+notaexame)/2;
        if(mediaexame >= 5){
            cout<<"Media: "<< media <<endl;
            cout<<"Aluno em exame." <<endl;
            cout<<"Nota do exame: " <<notaexame <<endl;
            cout<<"Aluno aprovado." <<endl;
            cout <<"Media final: "<<mediaexame<<endl;
            }

        else{
            cout<<"Media: "<< media <<endl;
            cout<<"Aluno em exame." <<endl;
            cout<<"Nota do exame: " <<notaexame <<endl;
            cout<<"Aluno reprovado." <<endl;
            cout <<"Media final: "<<mediaexame<<endl;
            }
        }
    }