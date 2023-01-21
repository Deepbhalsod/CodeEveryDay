#include <bits/stdc++.h>
using namespace std;


class Solution 
{
public:
    string scaleneTriangle(int a, int b, int c) 
    {
        if(a != b && b != c && a != c)
            return "YES";
        else
            return "NO";
    }
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        
        Solution obj;
        cout << obj.scaleneTriangle(a,b,c) << endl;
    }
    return 0;
}
