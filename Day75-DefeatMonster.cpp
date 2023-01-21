#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int defeatMonster(long a, long b, long c)
    {
        if(b>c)
            return 1;
        else
            return 0;
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
        cin>>a>>b>>c;
        Solution ob;    
        cout <<ob.defeatMonster(a, b, c)<<endl;
    }
    return 0;
}