#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,a;

    while(cin>>n>>a){

        if(a==0 || n==0)return 0;

        vector<int> vet(n);
        int tot = 0, h_max=0;
        for(int i=0; i<n; i++){
            cin>>vet[i];
            tot += vet[i];
            h_max = max(vet[i], h_max);
        }

        if(tot==a){
            cout<<":D\n";
            continue;
        }

        if(tot<a){
            cout<<"-.-\n";
            continue;
        }

        double l=0, r=h_max, mid;
        while(r-l > 0.0000000001){
            mid = (l+r)/2.0;
            double sum = 0;

            for(int i=0; i<n; i++){
                if(vet[i]>mid){
                    sum += vet[i]-mid;
                }
            }

            if(sum>a) l =mid;
            else r = mid;
        }

        cout<<fixed<<setprecision(4)<<l<<"\n";
    }
}