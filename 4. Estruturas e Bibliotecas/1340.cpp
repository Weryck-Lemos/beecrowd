#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
         stack<int> s;
         queue<int> q;
         priority_queue<int> pq;

         bool isStack = true, isQueu = true, isPQ = true;

         for(int i=0; i<n; i++)
        {
            int op, x;
            cin>>op>>x;

            if(op==1)
            {
                s.push(x);
                q.push(x);
                pq.push(x);
            }

            else
            {
                if(s.empty() || s.top()!=x) isStack = false;
                s.pop();

                if(q.empty() || q.front()!=x) isQueu = false;
                q.pop();

                if(pq.empty() || pq.top()!=x) isPQ = false;
                pq.pop();
            }
        }

        if(!isStack && !isQueu && !isPQ) cout<<"impossible"<<endl;
        else if(isStack && !isQueu && !isPQ) cout<<"stack"<<endl;
        else if(!isStack && isQueu && !isPQ) cout<<"queue"<<endl;
        else if(!isStack && !isQueu && isPQ) cout<<"priority queue"<<endl;
        else cout<<"not sure"<<endl;
    }
}