#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, caso=1;
    while(cin>>n>>q && n!=0 && q!=0)
    {
        vector<int> marmore(n);

        for(int i=0; i<n; i++)
        {
            cin>>marmore[i];
        }

        sort(marmore.begin(), marmore.end());

        cout<<"CASE# "<<caso<<":"<<endl;
        for(int i=0; i<q; i++)
        {
            int x;
            cin>>x;
            int answer = lower_bound(marmore.begin(), marmore.end(), x) - marmore.begin();

            if(marmore[answer]== x && answer<n) cout<<x<<" found at "<<answer+1<<endl;
            else cout<<x<<" not found"<<endl;
        }
        caso++;
    }
}