#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int endSorted(int a[], int size)
    {
        if(a[0]==1 and a[size-1] == size)
            return 0;
        
        if(size==2)
            return 1;
            
        int s,e;
        for(int i=0; i<size; i++)
        {
            if(a[i]==1)
                s = i;
            if(a[i]==size) 
                e = i;
        }
        if(e<s)
            return ((s-0)+(size-1-e))-1;
        else
            return ((s-0)+(size-1-e));       

    }
};

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.endSorted(arr, n) << endl;
    }

    return 0;
}