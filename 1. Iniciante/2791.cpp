#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> copos(4);
    int pos;

    for(int i=0; i<4; i++){
        cin>>copos[i];
        if(copos[i]==1){
            pos = i+1;
        }
    }
    cout<<pos<<endl;

}