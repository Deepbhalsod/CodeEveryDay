#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
	int valentine(int a, int b)
	{
		return a/b;
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
		cout<<obj.valentine(n, m)<<endl;
	}
	return 0;
}
