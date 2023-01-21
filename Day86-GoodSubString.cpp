#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int goodSubString(string arr, long n)
    {
        int count=0;
        long i=0;
        long j=n-1;
        
        while(i<n)
        {
            if(arr[i]=='0')
            {
                if(arr[j]=='1' and i<j)    
                {
                    count++;
                }
                j--;
            }
            else
            {
                i++;
            }
            
            if(i==j)
            {
                i++;
                j=(n-1);
            }
        }
        // for(int i=0; i<n; i++)
        // {
        //     for(int j=n-1; j>=0; j--)
        //     {
        //         if(arr[i]=='1')
        //         {
        //             break;
        //         }
        //         else if(arr[j]=='1' and i<j)
        //             count++;
        //     }
        // }
        return count%10000007;
    }    
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        string arr;
        cin>>arr;

        Solution ob;    
        cout <<ob.goodSubString(arr, n)<<endl;
    }
    return 0;
}