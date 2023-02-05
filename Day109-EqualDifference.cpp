#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(int a[], int n)
    {
        if(n < 3)
            return 0;     
        
        sort(a, a + n);
        int same = 1, max = 0;
        for(int i = 1; i < n; i++) 
        {
            if(a[i-1] == a[i]) 
            {   
                same++;
            }
            else 
            {
                max = same > max ? same : max;
                same = 1;
            }
        }
        
        max = same > max ? same : max;
        
        if(max > 2) 
            return n - max;
        else
            return n - 2;
    }
};

int main(){

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends