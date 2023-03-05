#include <iostream>
using namespace std;

class Solution
{
    public:
	string increaseIQ(int iQ)
	{
		if(iQ+7 > 170)
			return "YES";
		else
			return "NO";    
	}
};

int main()
{
	int a;
	cin>>a;
	
	Solution ob;    
	cout <<ob.increaseIQ(a)<<endl;
    return 0;
}
