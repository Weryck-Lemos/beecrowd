#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(5);
    double delta = pow(b,2) -4*a*c;
    if (delta < 0 || a==0){
        cout <<"Impossivel calcular"<< endl;
    }
        else{
            double bhaskaraP = (-b + sqrt(delta))/(2*a);
            double bhaskaraN = (-b - sqrt(delta))/(2*a);
            cout <<"R1 = "<<bhaskaraP<< endl
            << "R2 = "<<bhaskaraN<<endl;
}
}