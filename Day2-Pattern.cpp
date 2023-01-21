#include<iostream>
using namespace std;

void pattern(int);

int main()
{
	int number;
	
	// cout<<"Enter Number"<<endl;
	// cin>>number;
	cout<<"ABC";
	cout<<"ASDS";
	
	//pattern(number);
	return 0;
}

void pattern(int num) 
{
	for(int row=0; row<num*num; row++)
	{
		for(int col=0; col<num*num; col++)
		{
			if(col==0 || col%3==0 || row==0 || row%3==0)
			{
				cout<<"* ";
			}
			else if(row==col || row==col+1 || col==row+1)
			{
				cout<<"@ ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}

	
}
