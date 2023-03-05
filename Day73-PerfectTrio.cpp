#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string perfectTrio(int a, int b, int c)
    {
        
        if((a==b+c) || (b==a+c) || (c==a+b))
        {
            return "YES";
        }
        else
        {
            return "NO";
        }    
    }

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        Solution ob;    
        cout <<ob.perfectTrio(a, b, c)<<endl;
    }
    return 0;
}
