#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, answer=0;
    cin>>n;

    for(int i=0; i<n; i++){
        string music;
        cin>>music;

        for(size_t j=0; j<music.size()-1; j++){
            if(music[j]=='C' && music[j+1]=='D'){
                answer++;
                break;
            }
        }
    }

    cout<<n-answer<<endl;
}