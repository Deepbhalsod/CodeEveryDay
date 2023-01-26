#include <bits/stdc++.h>
using namespace std;


class Solution 
{
public:
    maxProfit(const vector<int> &A) 
    {
        if(A.size() == 0)
            return 0;
        long profit = 0;
        for(int i = 0; i < A.size()-1; i++)
        {
            if(A[i]<A[i+1])
                profit = profit + (A[i+1]-A[i]);
            
        }
        return profit;
    }
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxProfit(arr) << endl;
    }
    return 0;
}