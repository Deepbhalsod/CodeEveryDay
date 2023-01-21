#include<iostream>
using namespace std;

bool checkPalindrome(int);
void fibSeries(int);

int main()
{
	int p,f;
	
	cout<<"Enter number: ";
	cin>>p;
	
	if(checkPalindrome(p))
        cout<<p<<" is palindrome number"<<endl;
    else
        cout<<p<<" is not palindroe number"<<endl;

    cout<<"Enter Input: ";
	cin>>f;
    fibSeries(f);
	return 0;
}

bool checkPalindrome(int num) 
{
    int r = 0;
	int digit;
    int s = num;
    while (num!=0)
    {
        digit = num%10;
        r = (r*10) + digit;
        num = num/10;
    }
    
    if (r==s)       
        return true;
    else
        return false;
}


void fibSeries(int num) 
{
    int a = 0;
    int b = 1;
    int c;
    cout<<a<<" "<<b<<" ";
	for(int i=0; i<num-2; i++)
	{
        c =a+b;
        cout<<c<<" ";
        a = b;  
        b = c;
	}

	
}