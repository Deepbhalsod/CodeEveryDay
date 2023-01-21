#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    long colorTheCube(int N, long a, long b, long c, long x, long y, long z)
    {
        long sum = 0;
        if(N%2==0)
            N = N/2;
        else
            N = (N/2)+1;
        return sum = (a+b+c+x+y+z)*N;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        long a, b, c, x, y, z;
        cin>>N;
        cin>>a>>b>>c>>x>>y>>z;
        
        Solution ob;    
        cout <<ob.colorTheCube(N, a, b, c, x, y, z)<<endl;
    }
    return 0;
}