#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> prefix_count(26);

    while (n--)
    {
        string a, b;
        cin >> a >> b;

        if (a == "add")
        {
            int idx = b[0] - 'a'; 
            prefix_count[idx]++;
        }
        else
        {
            int idx = b[0] - 'a';
            cout << prefix_count[idx] << endl;
        }
    }

    return 0;
}
