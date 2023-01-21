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
	int count = 1;
	for(int row=1; row<=num; row++)
	{
		for(int col=1; col<=num; col++)
		{
			if((col*count)>=10)
			{
            	printf("%d ",col*count); 
			}
            else
            {
				printf("%d  ",col*count); 	
			}
		}
		count++;
		
        printf("\n");
	}
}