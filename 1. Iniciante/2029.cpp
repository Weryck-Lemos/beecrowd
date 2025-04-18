#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double volume, diametro;
    while(cin>>volume>>diametro){
        double raio=diametro/2;
        double altura = volume/(3.14*(raio*raio));
        double area = 3.14*(raio*raio);

        cout<<fixed<<setprecision(2);

        cout<<"ALTURA = "<<altura<<endl;
        cout<<"AREA = "<<area<<endl;
    }
}