#include<iostream>
using namespace std;

char charFreq(string);

int main()
{
	string str;
    cout<<"Enter String :";
    cin>>str;
    if(charFreq(str) != 1 )
        cout<<charFreq(str);
    else
        cout<<-1;    

	return 0;
}

char charFreq(string str) 
{
    char c;
    int counter;

    for(int j = 0; j < str.length(); j++)
    {

        c = str[j];
        counter = 1;
        for(int i = j+1; i < str.length(); i++)
        {
            if(c == str[i])
                counter++;
    
            if(counter>=2)
                return c;
        }
    }
    return 1;	
}