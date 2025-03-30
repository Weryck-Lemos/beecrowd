#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        map<char, int> incorreto;
        map<char,int> tempo;
        set<char> certos;

        int point=0, pen_tot=0;

        for(int i=0; i<n; i++)
        {
            char questao;
            int pen;
            string verif;

            cin>>questao>>pen>>verif;
 
            if(verif == "correct")
            {
                if(certos.find(questao) == certos.end())
                {
                    point++;
                    pen_tot += pen + incorreto[questao]*20;
                    certos.insert(questao);
                }
            }
            else incorreto[questao]++;
        }

        cout<< point <<" "<<pen_tot<<endl;
    }
}