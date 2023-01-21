#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src)
{     
    string ans = "";
    ans += src[0];
    int count = 1;
  
    for(int i = 1; i < src.size(); i++)
    {
        if(ans[ans.size()-1] == src[i])
            count++;
        else
        {
            ans += to_string(count);
            ans += src[i];
            count = 1;
        }
    }
    return ans+to_string(count); 
}