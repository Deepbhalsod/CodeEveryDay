    //{ Driver Code Starts
    #include <bits/stdc++.h>
    using namespace std;

    int transitionPoint(int arr[], int n) 
    {
        int i=0;
        while(i!=n)
        {
            if(arr[i]==1)
                return i;
            i++;
        }
        return -1;
    }
    // int transitionPoint(int arr[], int n) 
    // {
    //     int i=0;
    //     int a = arr[0];
    //     while(i!=n)
    //     {
    //         if(a!=arr[i])
    //             return i;
    //         i++;
    //     }
    //     if(a==1)
    //         return 0;
    //     else
    //         return -1;
    // }

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
            cout << transitionPoint(a, n) << endl;
        }
        return 0;
    }
