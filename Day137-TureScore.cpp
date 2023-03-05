#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string scoreConsistent(int a, int b, int c, int d)
    {
        if((a<=c) and (b<=d))
            return "POSSIBLE";
        else
            return "IMPOSSIBLE";
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b;
        cin>>c>>d;
        
        Solution ob;    
        cout <<ob.scoreConsistent(a, b, c, d)<<endl;
    }
    return 0;
}
