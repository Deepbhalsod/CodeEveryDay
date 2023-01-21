//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string adjSumParity(int arr[], int n) 
{
    int i=0,sum=0;
    while(i!=n)
    {
        sum += arr[i];
        i++;
    }
    if(sum%2==0)
        return "YES";
    else 
        return "NO";
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        cout << adjSumParity(a, n) << endl;
    }
    return 0;
}
