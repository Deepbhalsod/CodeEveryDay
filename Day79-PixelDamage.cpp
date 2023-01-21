#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int pixelDamage(long h, long w, long x, long y, long k)
    {
        long a,b;
        a = (w-x)*(w-x);
        b = (h-y)*(h-y);
        
        if(sqrt(a+b)<k)
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
        long h, w, x, y, k;
        cin>>h>>w>>x>>y>>k;
        
        Solution ob;    
        cout <<ob.pixelDamage(h, w, x, y, k)<<endl;
    }
    return 0;
}