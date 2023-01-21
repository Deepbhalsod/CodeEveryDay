#include <iostream>
using namespace std;

class Solution
{
    public:
    int equilibriumPoint(long long a[], int n) 
    {
        long sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        int leftSum = 0;
        for(int j = 0; j < n; j++)
        {
            if(leftSum == sum - a[j] - leftSum)
            {
                return j+1;
            }
            leftSum += a[j];
        }
        return -1;
    }
};


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}