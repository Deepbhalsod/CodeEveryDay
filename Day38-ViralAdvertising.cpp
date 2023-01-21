#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
	int viralAdvertising(int n) 
	{
		int sum = 0;
		int s = 5;
		while(n != 0)
		{
			s /= 2;
			sum += s;
			s *= 3;   
			n--;
		}
		return sum;
	}
};
int main() 
{   
	int s;
	cin >> s;
	Solution ob;
	cout << ob.viralAdvertising(s) << "\n";

    return 0;
}