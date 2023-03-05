#include <iostream>
using namespace std;

class Solution
{
    public:
	string goodTurn(int x, int y)
	{
		if(x+y > 6)
			return "YES";
		else
			return "NO";    
	}
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int a,b;
    	cin>>a>>b;
    	
    	Solution ob;    
    	cout <<ob.goodTurn(a,b)<<endl;
    }
    return 0;
}
