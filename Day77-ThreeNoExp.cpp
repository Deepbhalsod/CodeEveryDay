#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string ThreeNoExp(long a, long b, long c)
    {
        
        long ans = (a >= b ? (a >= c ? a : c):(b >= c ? b : c));
        
        if((ans-a-b == 0) || (ans-a-c == 0) || (ans-c-b == 0))
            return "YES";
        else
            return "NO";
    }

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long a;
        long b;
        long c;
        cin>>a;
        cin>>b;
        cin>>c;
        Solution ob;    
        cout <<ob.ThreeNoExp(a, b, c)<<endl;
    }
    return 0;
}