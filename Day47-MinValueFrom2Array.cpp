#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
	long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+n);
        long sum = 0;
        for(int k = 0; k < n; k++)
        {
            sum += (a[k]*b[n-k-1]);
        }
        return sum;
    }
};
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;
        cin>>n;
        int a[n], b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        Solution ob;
        cout<< ob.minValue(a, b, n) <<endl;
    }

return 0;
}