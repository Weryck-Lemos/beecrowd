#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double l1,l2,l3, area, perimetro;
    cin>>l1>>l2>>l3;
    cout<< fixed<< setprecision(1);

    if(l1+l2>l3 && l2+l3>l1 && l3+l1>l2){
        perimetro = l1+l2+l3;
        cout<<"Perimetro = "<<perimetro<<endl;
    }
    else{
        area = (l1+l2)*l3/2;
        cout<< "Area = "<<area<<endl;
    }
}