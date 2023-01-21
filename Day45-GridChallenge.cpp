#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:	
	
    string gridChallenge(vector<string> grid) 
    {
        int len = grid.size();
        int i,j;
        int l = 0;
        vector<string> newVec;
        while (l != len) 
        {
            string s1 = grid[l]; 
            for (int a = 0; a < s1.length()-1; a++) 
            {
                for (int b = a+1; b < s1.length(); b++) 
                {
                    if(s1[a] > s1[b])
                    {
                        char temp = s1[b];
                        s1[b] = s1[a];
                        s1[a] = temp;
                    }
                
                }
            }
            newVec.push_back(s1);
            l++;
        }    
        
        for (int i = 0; i < len-1; i++) 
        {
            string str = newVec[i];
            string str2 = newVec[i+1];
            for (int j = 0; j < str.length(); j++) 
            {
                if(str[j] > str2[j])
                    return "NO";
            }        

        }
        return "YES";
    }
};
int main() 
{
    vector<string> grid = {"ebacd", "fghij", "olmkn", "trpqs", "xywuv"};
    Solution ob;
    string ans = ob.gridChallenge(grid);
    cout << ans << endl;

    return 0;
}