#include<stdio.h>
#include<string.h>

void pattern(int);

int main()
{
	int number;
	
	printf("Enter number of rows: ");
	scanf("%d",&number);
	
	pattern(number);
	return 0;
}

void pattern(int num) 
{
	for(int row=1; row<=num; row++)
	{
		for(int col=1; col<=num; col++)
		{
			if((row==col) || (col==row) || (row==1) || (col==1) || (row==num) || (col==num) || (row+col==(num+1)))
			{
            	printf("*"); 
			}
            else
            {
                printf(" ");
            }
		}
        printf("\n");
	}
}