#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int repeatedNumber(vector<int> &A) 
    {
        vector<int> a = A;
        int n = a.size();
        sort(a.begin(), a.end());
        
        for(int i=0; i<n-1; i++) 
        {
            if(a[i]==a[i+1])
                return a[i];
        }
        return -1;
    }
};
 
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) 
        {
            cin >> array[i];
        }    
        Solution obj;
        cout << obj.repeatedNumber(array) << endl;
    }
    return 0;
}