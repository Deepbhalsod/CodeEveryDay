#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
    int lonelyinteger(vector<int> a) 
    {
        sort(a.begin(),a.end());
        int len = a.size();
        if(len==1)
        {
            return a[0];
        }
        for (int i = 0; i < len; i++) 
        {
            if((a[i-1] != a[i]) && (a[i] != a[i+1]))
            {
                return a[i];
            }
        
        }
        return -1;

    }

};
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
	    vector<int> v;
        int n,a;
        cin>>n;
        for(int i = 1; i <= n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        Solution obj;
		cout<<obj.lonelyinteger(v)<<endl;
	}
	return 0;
}