#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin>>N;
    cout<<fixed<<setprecision(2);

    for(int i=0; i<N; i++){
        double tempo=0.08;

        string galopeira;
        cin>>galopeira;

        for(char c: galopeira){
            if(c== 'e'){
                tempo+=0.01;
            }
        }
        cout<<tempo<<endl;
    }
}