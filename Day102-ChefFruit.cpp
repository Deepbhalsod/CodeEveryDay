#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int chefFruit(int n, int m, int k)
    {
        if(n == m)
            return 0;
        
        if(n > m)
        {
            if(m+k > n)
                return 0;
            else
                return n-(m+k);
        }
        
        if(m > n)
        {
            if(n+k > m)
                return 0;
            else
                return m-(n+k);
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
        cout <<ob.chefFruit(a, b, c)<<endl;
    }
    return 0;
}