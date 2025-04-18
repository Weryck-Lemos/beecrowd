#include <iostream>
using namespace std;

int main(){
    double raio, gas;
    cin>>raio>>gas;

    double volume = (4.0/3)* 3.1415 * (raio*raio*raio);

    cout<<int(gas/volume)<<endl;
}