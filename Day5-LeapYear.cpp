#include<iostream>
using namespace std;

void pattern(int);

int main()
{
	int year;
	
	cout<<"Enter Year: ";
	cin>>year;
	
	pattern(year);
    
	return 0;
}

void pattern(int year) 
{
   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
   {
        cout<<year<<" :Leap year";
   }
   else
   {
        cout<<year<<" : Not a leap year";
   }
}
