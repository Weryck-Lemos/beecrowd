#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n1, n2, media, entrada;
    cout<<fixed<<setprecision(2);

    while(true){
        while(true){
            cin>>n1;
            if(n1>=0 && n1<=10) break;
            else cout<<"nota invalida"<<endl;
        }
        while(true){
            cin>>n2;
            if(n2>=0 && n2<=10) break;
            else cout<<"nota invalida"<<endl;
        }
        media=(n1 + n2)/2;
        cout<<"media = "<<media<<endl;
        while(true){
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>entrada;
            if(entrada==2 || entrada==1){
                break;
            }
        }
        if(entrada==2)break;
    }
}
