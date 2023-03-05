#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0) 
	            cout << 1;
	        else 
	            cout << 0;
	        cout << " ";
	    }
	    cout << endl;
	    
	}
	return 0;
}
