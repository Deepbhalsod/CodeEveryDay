#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string bearAndCandies(int limak, int bob)
    {
        int sumLimak = 0;
        int sumBob = 0;
        int i = 1;
        
        while(true)
        {            
            if(i%2==0)
                sumBob += i;
            else
                sumLimak += i;
            
            if(sumLimak > limak)
                return "Bob";
            if(sumBob > bob)
                return "Limak";

            i++;
        }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        int b;
        cin>>a;
        cin>>b;

        Solution ob;    
        cout <<ob.bearAndCandies(a, b)<<endl;
    }
    return 0;
}