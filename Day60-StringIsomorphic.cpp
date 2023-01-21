#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        int len1 = str1.length();
        int len2 = str2.length();
        char arr[26] = {0};
        int count = 0;
        char s;
        
        if(len1 != len2)
        {
            return 0;
        }
        for(int i = 0; i < len1; i++)
        {
            int index = str1[i] - 'a';
            if(arr[index] == 0)
            {
                arr[index]  = str2[i];
            }
            else
            {
                if(str2[i] != arr[index])
                {
                    return 0;
                }
            }
        }
        for(int a = 0; a<len1; a++)
        {
            count = 0;
            s = str2[a];
            for(int b = 0; b<26; b++)
            {
                if(arr[b] != 0 && s == arr[b])
                {
                    count++;
                    if(count >= 2)
                        return 0;
                }
            }
        }
        return 1;
    }
};

int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}