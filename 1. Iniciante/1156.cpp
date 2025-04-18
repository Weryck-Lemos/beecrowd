#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double S=0;
    for(double i = 1, j =1; i<=39; i+=2, j*=2){
        S+=(i/j);
    }
    cout<<fixed<<setprecision(2);
    cout<<S<<endl;
}