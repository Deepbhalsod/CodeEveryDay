#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
	
int chocolateFeast(int n, int c, int m) 
{
    int ans;
    if((n/c)<m)
    {
        return (n/c);
    }
    else if((n/c) == m) 
    {
        return (n/c)+1;
    }
    else
    {
        ans =  n/c;
        int d = (n/c)/m;
        ans += d;
        int r = (n/c)%m;
        int q = d+r;
        while(q>=m)
        {
            d = (q)/m; 
            r = (q)%m;
            ans += d;
            q = d+r;
                        
        }
        
        return ans;
    }

}

};
int main() 
{
  
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n,c,m;
   		cin >> n >> c >> m;
   	    Solution ob;
   		cout << ob.chocolateFeast(n,c,m) << "\n";
   	}

    return 0;
}