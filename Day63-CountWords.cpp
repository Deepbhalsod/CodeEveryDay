#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int countWords(string list[], int n)
    {
        sort(list,list+n);
        int count=0;
        int ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(list[i] == list[i+1])
            {
                if(list[i] != list[i+2] && (list[i] != list[i-1]))
                {
                    count++;
                }
            }
        }
        return count;
        
        // for(int i = 0; i < n; i++) 
        // {
        //     count = 0;
        //     for(int j = 0; j < n; j++) 
        //     {
        //         if((list[i] == list[j]) && (i != j))
        //         {
        //             count++;
        //         }
        //     }
        //     if(count==1)
        //         ans += 1;
        // }  
        // return ans/2;
    }
        

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}