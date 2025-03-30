#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nome;
    int distancia, count=0, total=0;

    while(cin>>nome>>distancia){
        count ++;
        total+=distancia;

        
    }
    cout<<fixed<<setprecision(1)<<double(total)/count<<endl;
    
}