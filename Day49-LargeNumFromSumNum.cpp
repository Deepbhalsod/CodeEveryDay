#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
    string largestNumber(int n, int sum)
    {
        string ans;
        if(n*9 >= sum)
        {    
            for(int i = 0; i < n; i++)
            {
                if(sum >= 9)
                {
                    ans = ans + "9";
                    sum = sum - 9;
                }
                else
                {
                    ans = ans + to_string(sum);
                    sum = 0;
                }    
            }
            return ans;
        }
        else
        {
            return "-1";   
        }
    }
};
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}