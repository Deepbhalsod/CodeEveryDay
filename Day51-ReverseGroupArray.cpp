#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        int l = 0;
        int i = 0;
        int r = k-1;
        int j = k-1;
        int t;
        int flag = 0;
        while(flag == 0)
        {
            if(k>n)
            {
                k = n;
                r = k - 1;
                j = k - 1;
            }
            if(r==(n-1) && i>=j)
            {
                break;
            }
            if(i>=j && k==n)
            {
                break;
            }
            if(i>=j)
            {
                l += k;
                r += k;
                i = l;
                j = r;
            }
            if(j>=n)
            {
                r = n-1;
                j = n-1;
                //flag = 1;
            }
            t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
            i++;
            j--;
        }
    }

};
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}