#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
	long numOfRectangle(long n, long m)
	{
		long g = m*(m+1)*n*(n+1)/4;
		return g-(n*m);
	}
};

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long n,m;
	    cin>>n>>m;
	    
		Solution obj;
		cout<<obj.numOfRectangle(n, m)<<endl;
	}
	return 0;
}
