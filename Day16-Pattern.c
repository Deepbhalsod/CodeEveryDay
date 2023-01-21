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
	for(int row=num; row>0; row--)
	{
        int space = num-row;
		for(int col=1; col<=space; col++)
		{
            printf(" "); 
		}
       
        int star = row;
        for(int col=1; col<=star; col++)
		{
            printf("* ");
		}
        printf("\n");
	}

    for(int row=1; row<=num; row++)
	{
        int space = num-row;
		for(int col=1; col<=space; col++)
		{
			printf(" ");
		}
       
        int star = row;
        for(int col=1; col<=star; col++)
		{
            printf("* ");
		}
        printf("\n");
	}
}