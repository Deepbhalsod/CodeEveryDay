#include<iostream>
using namespace std;

void pattern(int);

int main()
{
	int number;
	
	cout<<"Enter number of rows: ";
	cin>>number;
	
	pattern(number);
	return 0;
}

void pattern(int num) 
{
	for(int row=num; row>0; row--)
	{
        int n = num;
		for(int col=0; col<row; col++)
		{
            if (row%3==0)
                cout<<"$ ";
            else if((row-1)%3==0)
                cout<<n--<<" ";
            else
                cout<<"* "; 
		}
        cout<<endl;
	}
}