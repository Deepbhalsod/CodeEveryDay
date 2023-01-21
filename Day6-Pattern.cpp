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
    int m = 1;
	int n = 1;
    int a = 1;

	for(int row=0; row<num; row++)
	{
        
		for(int col=0; col<row; col++)
		{
            if(col==0)
            {
                a = n;
            }
            cout<<n<<"*";
            n--;   
		}
        m++;
		cout<<n<<endl;
		n = a + m;
	}
}


// void pattern(int num) 
// {
//     int n = 1;

// 	for(int row=1; row<=num; row++)
// 	{
//         n = (row*(row+1))/2;
// 		for(int col=1; col<row; col++)
// 		{
//             cout<<n--;
//             cout<<"*";   
// 		}
        
// 		cout<<n--<<endl;
// 	}

	
// }