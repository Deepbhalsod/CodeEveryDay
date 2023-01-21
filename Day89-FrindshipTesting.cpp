#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int friendshipTesting(int arr[], int n)
    {
        sort(arr,arr+n);
        int count=0;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
            }
        }
        return n-count;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        Solution ob;    
        cout <<ob.friendshipTesting(arr, n)<<endl;
    }
    return 0;
}
