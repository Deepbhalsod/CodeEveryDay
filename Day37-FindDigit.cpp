#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
	int findDigits(int n) 
	{
		int count = 0;
		int num = n;
		int r;
		while (num!=0) 
		{
			r = num%10;
			if(r != 0)
				if(n%r==0)
					count++;
			num = num/10;
		}
		return count;
	}
};
int main() 
{   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.findDigits(s) << "\n";
   	}

    return 0;
}