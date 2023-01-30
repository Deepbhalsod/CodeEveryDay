//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        if(size == 1)
            return a[0];     
        sort(a,a+size);
        int max=1,ans=0,val=a[0];
        for(int i=0; i<size-1; i++)
        {
            if(a[i] == a[i+1] )
                max++;
            else
                max=1;
            
            if(max>ans)
            {
                ans = max;
                val = a[i];
            }
        } 
        if(ans > size/2 )
            return val;
        else
            return -1;   

    /*        int arr[1000000] = {0};
        
        for(int i=0; i<size; i++)
        {
            arr[a[i]]++;
        }
        int max=0,ans;
        for(int j=0; j<1000000; j++)
        {
            if(arr[j] > max)
            {
               max = arr[j];
               ans = j;
            }
        }  
        if(max > size/2 )
            return ans;
        else
            return -1;*/
             
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends