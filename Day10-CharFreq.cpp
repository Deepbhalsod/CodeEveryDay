#include<iostream>
using namespace std;

string charFreq(string);

int main()
{
	string str = "Hello world, welcome to CP Club";
    cout<<charFreq(str);

	return 0;
}

string charFreq(string str) 
{
    string ans = "";
        char c;
        int counter;

    for(int j = 0; j < str.length(); j++)
    {

            c = str[j];
            counter = 1;
            for(int i = j+1; i < str.length(); i++)
            {
                if(c==toupper(str[i]) || c == tolower(str[i]))
                {
                    counter++;
                    str[i]=' ';
                }
            }
            if(c>='A' && c<='z')
                ans = ans+c+" = "+to_string(counter)+", ";
    }
    return ans;	
}