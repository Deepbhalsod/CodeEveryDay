#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int changeIt(int list[], int n)
    {
        int count = 1;
        int max=0;
        for(int i=0; i<n; i++) 
        {
            count=1;
            for(int j=0; j<n; j++) 
            {
                if((list[i]==list[j]) && (i!=j))
                {
                    count++;
                }
            }
            if(count>max)
                max = count;
        }
        return n-max;
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
        int list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.changeIt(list, n)<<endl;
    }
    return 0;
}