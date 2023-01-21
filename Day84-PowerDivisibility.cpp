#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
string powerDivisiblilty(int no, int b)
{
    int rem;
    string exp = "";
    
    while(no!=0)
    {
        rem = no%10;
        
        if(b%4==0 && b!=0)  
            b = 4;
        else
            b = b%4;
            
        rem = pow(rem, b);
        
        rem = rem%10;
        exp += to_string(rem);
        
        no = no/10;
    }
    int ans = stoi(exp);
    
    if(ans%7==0)
        return "YES";
    else
        return "NO";
    
}
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        int b;
        cin>>a;
        cin>>b;

        Solution ob;    
        cout <<ob.powerDivisiblilty(a, b)<<endl;
    }
    return 0;
}