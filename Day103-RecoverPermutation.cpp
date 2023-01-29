#include <bits/stdc++.h>
using namespace std;

void badElement(int arr[], int n) 
{
    int a=0, one = 0, zero = 0;
	    
    while(n--)
    {
        one++;
        if(arr[a]) 
        {
            for(int j = one; j > zero; j--)
            {
                cout << j << " ";
            }
            zero = one;
        }
        a++;
    }
    cout<<endl;
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
        badElement(a, n);
    }
    return 0;
}
