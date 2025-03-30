#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int,int> freq;

    vector<int> arr(n), sumpref(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long result = 0;

    sumpref[0] = arr[0];
    for(int i=0; i<n; i++)
    {
        if(i!=0) sumpref[i] = sumpref[i-1] + arr[i];
        else sumpref[i] = arr[i];


        if(sumpref[i]==k) result++;

        result += freq[sumpref[i]-k];
        freq[sumpref[i]]++;
    }    

    cout << result << endl;
    return 0;
}
