#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str)
{
    
  //Your code here
  int len = str.length();
  cout << len << " " <<endl;
  string newStr = "";
  
  for(int i = len; i>=0; i--)
    newStr += str[i];
  return newStr;
}
int main() 
{
	
	int t;
	cin>>t;
	while(t--)
	{
    string s;
    getline(cin,s);

    cout << reverseWord(s) << endl;
	}
	return 0;
}

