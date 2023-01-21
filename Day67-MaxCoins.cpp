#include <bits/stdc++.h>
using namespace std;


class Solution 
{
public:
    int maxCoins(int N, vector<int> &arr) 
    {
        int sum = 0;
        while(!arr.empty())
        {
            if(arr.size() < 3)
            {
                return sum + (arr[0]*arr[1] + arr[1]);
            }
            sum = sum + (arr[0]*arr[1]*arr[2]);
            arr.erase(arr.begin()+1);
        }
        
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
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}