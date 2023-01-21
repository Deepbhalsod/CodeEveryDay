#include<iostream>
using namespace std;

string fourSum(int[],int,int);

int main()
{
	int n=7,k=23;
    int arr[n] = {10,2,3,4,5,7,8};
    cout<<fourSum(arr,n,k);
	return 0;
}

string fourSum(int arr[], int n, int k) 
{
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            for (int l = 2; l < n; l++)
            {
                for (int m = 3; m < n; m++)
                {
                    int sum = arr[i]+arr[j]+arr[l]+arr[m];

                    if(sum==k)
                        if(arr[i]!=arr[j] && arr[j]!=arr[l] && arr[l]!=arr[m] && arr[m]!=arr[i])                                       
                            ans += to_string(arr[i])+" "+to_string(arr[j])+" "+to_string(arr[l])+" "+to_string(arr[m])+" $";
                }
                
            }
            
        }
        
    }
        
    return ans;	
}