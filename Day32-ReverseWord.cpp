#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string reverseWords(string S) 
    { 
        // code here 
        string newStr = "";
        int countDot = 0,j = 0;
        for(int i = S.length()-1; i >= 0; i--)
        {
            countDot++;
            j=i+1;
            if(S[i] == '.')
            {
                while(countDot != 1)
                {
                    newStr += S[j];
                    newStr += (countDot==2)? +"." : ""; 
                    countDot--;
                    j++;
                }
                countDot = 0;
            }
            if(i==0)
            {
                while(countDot!=0)
                {
                    newStr += S[i];
                    i++;
                    countDot--;
                }
                break;
            }
        }
        return newStr;
    }
};    
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s = "i.love.cpclub";
        //cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}