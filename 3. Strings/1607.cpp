#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    while(n>0){

        string inicio, final;
        cin>>inicio>>final;

        int tot=0;

        for(size_t i=0; i<inicio.size(); i++){
            int dif=0;
            dif+= final[i] - inicio[i];
            if(dif<0){
                dif+=26;
            }

            tot+=dif;
        }

        cout<<tot<<endl;

        n--;
    }
}