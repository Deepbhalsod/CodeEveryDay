#include <bits/stdc++.h>
#include <iomanip>
using namespace std;


class Solution
{
    public:
    double emotionalProximity(double p, double x, double y, double z)
    {
        cout << fixed << setprecision(10);
        double per;
        if(z == 0)
        {
            per = (x*p)/100;
            return (p-per);
        }
        else
        {
            per = (y*p)/100;
            return (p+per);
        }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        int x, y, z;
        cin>>p>>x>>y>>z;
        
        Solution ob;    
        cout <<ob.emotionalProximity(p, x, y, z)<<endl;
    }
    return 0;
}