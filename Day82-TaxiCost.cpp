#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long taxiCost(long n, long x, int list[])
    {
        long cost=0;
        for(int i=0; i<n; i++)
        {
            if(list[i] == 0 && list[i-1] != 1)
                continue;
                
            cost += x;
        }
        return cost;
    }
        

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,x;
        cin>>n>>x;
        
        int list[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>list[i];
        }    

        Solution ob;    
        cout <<ob.taxiCost(n, x, list)<<endl;
    }
    return 0;
}