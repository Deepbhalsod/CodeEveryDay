#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int schoolAssembly(int n, int list[])
    {
        int max = list[0];
        int count=1;
        for(int i=0; i<n; i++)
        {
            if(list[i] > max)
            {
                count++;
                max = list[i];
            }
        }
        return count;
    }
        

};

int main()
{
    int n;
    cin>>n;
    
    int list[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>list[i];
    }    

    Solution ob;    
    cout <<ob.schoolAssembly(n, list)<<endl;
    return 0;
}
