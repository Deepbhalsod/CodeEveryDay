#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string birdFarm(int x, int y, int z)
    {
        if(z%x==0 and z%y==0)
            return "ANY";
        else if(z%x==0)
            return "CHICKEN";
        else if(z%y==0)
            return "DUCK";
        else
            return "NONE";
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
        cout <<ob.birdFarm(a, b, c)<<endl;
    }
    return 0;
}
