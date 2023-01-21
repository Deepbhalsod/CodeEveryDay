#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int attackKingdom(int arr[], int n)
    {
        sort(arr,arr+n);
        return arr[1];
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
        cout <<ob.attackKingdom(arr, n)<<endl;
    }
    return 0;
}