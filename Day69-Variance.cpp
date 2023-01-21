#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string variance(int A[], int n1) 
    {
        double mean = 0;
        double var = 0;
        for(int i=0; i<n1; i++)
        {
            mean += A[i];
        }
        mean = mean/n1;
        
        for(int j=0; j<n1; j++)
        {
            var += ((A[j]-mean)*(A[j]-mean));
        }
        var = var/(n1);

        var *= 100;
        var = round(var);
        string s = to_string(var/100);
        size_t p = s.find('.');
        return s.substr(0,p+3);

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
        cout <<ob.variance(list,n)<<endl;
    }
    return 0;
}