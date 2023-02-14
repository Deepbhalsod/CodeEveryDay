#include <bits/stdc++.h>
#include <iomanip>
using namespace std;


class Solution
{
    public:
    string chefProportion(int a, int b, int c, int d)
    {
        if((a*b == c*d) or (a*c == b*d) or (a*d == b*c))
            return "Possible";
        else
            return "Impossible";
    }
};

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    Solution ob;    
    cout <<ob.chefProportion(a, b, c, d)<<endl;
    return 0;
}