#include <bits/stdc++.h>
using namespace std;

class Solution
{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> v;
        int k = 0;
        for(int i = 0; i < n; i++)
        {
            int max = a[k];
            for(int j = k; j < n; j++)
            {
                if(max < a[j])
                {
                    max = a[j];
                    k = j+1;
                }
            }
            v.push_back(max);
            if(k == n-1)
            {
                v.push_back(a[k]);
                break;
            }
            if(k == n)
            {
                break;
            }
        }
        return v;
    }
};

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}