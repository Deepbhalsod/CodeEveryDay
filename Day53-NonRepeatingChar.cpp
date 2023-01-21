#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int flag=0;
       if(S.length()==1)
       {
           return S[0];
       }

       for(int i=0;i<S.length();i++)
       {
           
           for(int j=0;j<S.length();j++)
           {
               if(S[i]!=S[j] )
               {
                   flag=1;
               }
               else if(S[i]== S[j] && i!=j)
               {
                   flag=0;
                   break;
                }
           }
           if(flag==1)
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