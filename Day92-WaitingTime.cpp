#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
	int waitingTime(int k, int x)
	{
		return k*7-x;
	}
};

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
		Solution obj;
		cout<<obj.waitingTime(n, m)<<endl;
	}
	return 0;
}
