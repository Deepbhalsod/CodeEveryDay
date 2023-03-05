#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    int minInteger(int x)
    {
        int i = 1;
        if(x%2!=0)
            return x;
        double ans = sqrt(x);
        //int a = ans;
        cout << ans << " "<< endl;

        if(int(ans) == ans)
            return ans;
        // while(true)
        // {
        //     return -1;
        //     i++;
        // }
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
        cout <<ob.minInteger(a)<<endl;
    }
    return 0;
}