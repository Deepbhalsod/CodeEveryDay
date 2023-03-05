#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
	int playMatchsticks(int a, int b)
	{
		int n = a+b;
		int ans = 0;
		int arr[10] = {6,2,5,5,4,5,6,3,7,6};
		
		while(n!=0)
		{
			int r = n%10;
			ans += arr[r];
			n = n/10;
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
	    int n,m;
	    cin>>n>>m;
	    
		Solution obj;
		cout<<obj.playMatchsticks(n, m)<<endl;
	}
	return 0;
}

