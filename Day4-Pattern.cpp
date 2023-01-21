#include<iostream>
using namespace std;

void pattern(int);

int main()
{
	int number;
	
	cout<<"Enter Number of rows: ";
	cin>>number;
	
	pattern(number);
	return 0;
}

void pattern(int num) 
{
	int n = num;
	for(int row=0; row<num; row++)
	{
		for(int col=n; col>0; col--)
		{
			cout<<" ";
		}
		cout<<"******"<<endl;
		n--;
	}

	
}
