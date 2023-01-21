#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) 
	{
	    // code here
	    int min,tempp;
        for (int i = 0; i < n - 1; i++) 
        {
            min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                    tempp = arr[i];
                    arr[i] = arr[min];
                    arr[min] = tempp;
                }
            }
        }    
	    int max = arr[0];
		int temp=arr[0];
		for(int i=0; i<n; i++)
	    {
			if(max<arr[i])
			{
				temp = max;
				max = arr[i];
			}
	    }
		return temp;
	}
};
int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}