#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    char nonrepeatingCharacter(string S)
    {
        int i,flag;
        int len = S.length();

        for(i = 0; i < len; i++)
        {
            flag = 0;
            for(int j = 0; j < len; j++)
            {
                if((S[j] == S[i]) && (i != j))
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                return S[i];
            }
        }
        return '$';
    }

};
int main() 
{
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}