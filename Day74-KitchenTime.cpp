#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int kitchenTime(int a, int b)
    {
        return b-a;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        int b;
        cin>>a;
        cin>>b;

        Solution ob;    
        cout <<ob.kitchenTime(a, b)<<endl;
    }
    return 0;
}