#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int minValueToBalance(int a[], int n)
    {
        //code here.
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(i < n/2)
            {
                sum1 += a[i];
            }
            else
            {
                sum2 += a[i];
            }
        }
        int ans = sum2 - sum1;
        if(ans < 0)
        {
            return (sum1-sum2);
        }
        return ans;
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
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}