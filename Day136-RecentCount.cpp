#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void recentContest(int a, string arr[])
    {
        int s=0, l=0;
        for(int i=0; i<a; i++)
        {
            if(arr[i]=="START38")
                s++;
            else
                l++;
        }
        cout << s << " " << l << endl; 
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
        string arr[a];
        for(int i=0; i<a; i++)
        {
            cin>>arr[i]; 
        }
        Solution ob;    
        ob.recentContest(a, arr);
    }
    return 0;
}
