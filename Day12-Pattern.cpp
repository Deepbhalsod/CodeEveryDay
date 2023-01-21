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
	for(int row=1; row<=5; row++)
	{
        int star = (num*2)-row-1;
		for(int col=1; col<=star; col++)
		{
            cout<<"* "; 
		}
       
        int pyramid = (row*2)-1;
        for(int col=1; col<=pyramid; col++)
		{
            if(col%2==0)
                cout<<"* ";
            else 
                cout<<row<<" ";  
		}
        
		for(int col=1; col<=star; col++)
		{
                cout<<"* "; 
		}
        cout<<endl;
	}
}