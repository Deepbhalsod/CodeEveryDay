#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    void votersList(int a[], int size)
    {  

        int arr[1000000] = {0};
        int count = 0;
        for(int i=0; i<size; i++)
        {
            arr[a[i]]++;
        }
        for(int j=0; j<1000000; j++)
        {
            if(arr[j] > 1)
               count++;
        }
        cout << count << endl;
        for(int j=0; j<1000000; j++)
        {
            if(arr[j] > 1)
               cout<< j << endl;
        } 
             
    }
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int n = a+b+c;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    Solution obj;
    obj.votersList(arr, n);

    return 0;
}