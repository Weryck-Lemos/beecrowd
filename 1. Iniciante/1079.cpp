#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin>>N;

    double v1, v2, v3, media;
    cout<<fixed<<setprecision(1);

    for(int i=0; i<N; i++){
        cin>>v1>>v2>>v3;
        media = ((v1*2)+(v2*3)+(v3*5))/10;
        cout<<media<<endl;

    }
}