#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){

    while(true){
        int n;
        cin>>n;

        if(n==0){
            break;
        }

        queue<int> cartas;
        vector<int> cartas_retiradas;

        for(int i=1; i<=n; i++){
            cartas.push(i);
        }
        while(cartas.size() > 1){
            cartas_retiradas.push_back(cartas.front());
            cartas.pop();
            cartas.push(cartas.front());
            cartas.pop();
        }
        
        cout<<"Discarded cards: ";
        for(int i =0; i<cartas_retiradas.size(); i++){
            if(i<cartas_retiradas.size()-1){
                cout<<cartas_retiradas[i]<<", ";
            }
            else{
                cout<<cartas_retiradas[i]<<endl;
            }
        }

        cout<<"Remaining card: "<<cartas.front()<<endl;

    }
}