#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long divisibleNotDivisible(long x, long y, long z)
    {
        if(y%z==0)
            return -1;
            
        long i = y*((x/y)+1); 

        while(i%z==0)
        {
            i+=y;    
        }
        return i;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long a,b,c;
        cin>>a>>b>>c;
        Solution ob;    
        cout <<ob.divisibleNotDivisible(a, b, c)<<endl;
    }
    return 0;
}