#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, int> diasmes = {{1,0},{2,31},{3,60},{4,91},{5,121},
    {6,152}, {7,182}, {8,213}, {9,244}, {10, 274}, {11,305}, {12,335}
    };

    int mes, dia;
    while(cin>>mes>>dia){
        int totaldias = diasmes[mes] + dia;
        int natal = 360- totaldias;

        if(natal == 0){
            cout<<"E natal!"<<endl;
        }

        else if(natal == 1){
            cout<<"E vespera de natal!"<<endl;
        }

        else if(natal <0){
            cout<<"Ja passsou!"<<endl;
        }

        else{
            cout<<"Faltam "<<natal<<" dias para o natal!"<<endl;
        }
    }
}