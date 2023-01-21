#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    char getMaxOccuringChar(string str)
    {
        int s[26] = {0};
        for(int i = 0; i<str.length(); i++)
        {
            s[str[i] - 'a'] += 1;
        }
        int max = s[0];
        int k = 0;
        for(int j=0; j<26; j++)
        {
            if(max<s[j])
            {
                max = s[j];
                k = j;
            }
        }  
        char ans = k + 'a';
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}