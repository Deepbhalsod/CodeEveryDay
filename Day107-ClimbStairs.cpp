#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int climbStairs(int A)
    {
        if(A==1)
        {
            return A;
        }    
        else
        {
            int f = 1, s = 2, t;
            A -= 2;
            while(A--)
            {
                t = f+s;
                f = s;
                s = t;
            }    
            return s;
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
        cin>>a;
        
        Solution ob;    
        cout <<ob.climbStairs(a)<<endl;
    }
    return 0;
}