#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int luckyNo(long a)
    {
        int ans = 0;
        long num = a;
        while(num%2==0)
        {
            num /= 2;
            ans++;
        }
        if(ans%2==0)
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
        long a;
        cin>>a;

        Solution ob;    
        cout <<ob.luckyNo(a)<<endl;
    }
    return 0;
}