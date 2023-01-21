#include<iostream>
using namespace std;


string hackerrankInString(string s) 
{
    char arr[] = "hackerrank";
    int j =0; 
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]==arr[j])
            j++;
    }
    return (j == 10) ? "YES" : "NO";
}

int main()
{
	string str = "hereiamstackerrank";
    //string str = "hackerworld";
    cout<<hackerrankInString(str);

	return 0;
}
