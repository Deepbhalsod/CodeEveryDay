#include<iostream>
using namespace std;

void pattern1(int);
void pattern2(int);

int main()
{
	int number;
	
	cout<<"Enter number of rows: ";
	cin>>number;
	
	pattern1(number);

    cout<<"\n\n\n";

    pattern2(number);
	return 0;
}

void pattern1(int num) 
{
	for(int row=1; row<=num; row++)
	{
       
        int pyramid = (row*2)-1;
        for(int col=1; col<=pyramid; col++)
		{
            if(col%2==0)
                cout<<"*";
            else 
                cout<<row;  
		}
        cout<<endl;
	}
    for(int row=num; row>=1; row--)
	{
       
        int pyramid = (row*2)-1;
        for(int col=1; col<=pyramid; col++)
		{
            if(col%2==0)
                cout<<"*";
            else 
                cout<<row;  
		}
        cout<<endl;
	}
}

void pattern2(int num) 
{
    int n = 1;
	for(int row=1; row<=num; row++)
	{
       
        int pyramid = (row*2)-1;
        for(int col=1; col<=pyramid; col++)
		{
            if(col%2==0)
                cout<<"*";
            else 
                cout<<n++;  
		}
        cout<<endl;
	}
    n = n - num;
    for(int row=num; row>=1; row--)
	{
        int pyramid = (row*2)-1;
      
        for(int col=1; col<=pyramid; col++)
		{
            if(col%2==0)
                cout<<"*";
            else 
                cout<<n++;
		}
        cout<<endl;
        n = (n+1)-2*row;
	}
}