#include<stdio.h>
#include<string.h>

int populationCount(int, int, int);

int main()
{
	int testCase;
	
	scanf("%d",&testCase);
	int input[testCase][3];

    for(int i = 0; i < testCase; i++)
    {
        scanf("%d %d %d",&input[i][0], &input[i][1], &input[i][2]); 
    }

    printf("\n\n");

    for(int i = 0; i < testCase; i++)
    {
        printf("%d\n",populationCount(input[i][0], input[i][1], input[i][2])); 
    }

	return 0;
}

int populationCount(int x, int y, int z) 
{
    int ans = x-y+z;
	return ans;
}