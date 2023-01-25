//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int badElement(int arr[], int n) 
{
    sort(arr,arr+n);
    int i=0, max=0, count=0;
    while(i!=n)
    {
        count=0;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
                count++;
            else
                break;
        }
        if(count>max)
            max=count;
        i++;
    }
    return n-max-1;
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
        cout << badElement(a, n) << endl;
    }
    return 0;
}
