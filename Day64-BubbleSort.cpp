#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void bubbleSort(int arr[], int n)
    {
        for(int i = 0; i < n-1; i++) 
        {
            for(int j = 0; j < n-1; j++) 
            {
                if(arr[j] > arr[j+1])
                    swap(arr[j], arr[j+1]);
            }
        } 
    }
};

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
int main()
{
    int n,t,i;
  
    scanf("%d",&t);
    
    while(t--)
    {    
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        Solution ob;  
        
        ob.bubbleSort(arr, n);
        printArray(arr, n);
    }
    return 0;;
}