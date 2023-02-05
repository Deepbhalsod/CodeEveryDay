#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string airlineRestriction(int a, int b, int c, int d, int e)
    {
        if((a+b<=d) and (c<=e))
            return "YES";
        else if((a+c<=d) and (b<=e))  
            return "YES";
        else if((b+c<=d) and (a<=e))
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
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        
        Solution ob;    
        cout <<ob.airlineRestriction(a, b, c, d, e)<<endl;
    }
    return 0;
}