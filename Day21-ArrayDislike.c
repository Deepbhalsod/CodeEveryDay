#include<stdio.h>
#include<string.h>

void removeArray(int arrayA[], int arrayB[], int a, int b)
{
    int flag;
    for (int i = 0; i < a; i++)
    {   
        flag=0;
        for (int j = 0; j < b; j++)
        {
            if (arrayA[i] == arrayB[j])
            {
                flag=1;
            }
        }
        if(flag==0)
            printf("%d ",arrayA[i]);
    }
}
int main()
{
	int testCase,a,b;
	
	scanf("%d",&testCase);
    
    while (testCase>0)
    {
        printf("\n");
        scanf("%d",&a);
        int inputA[a];
        for(int i=0;i<a;i++)
        {
            scanf("%d",&inputA[i]);
        }
        scanf("%d",&b);
        int inputB[b];
        for(int i=0;i<b;i++)
        {
            scanf("%d",&inputB[i]);
        }
        removeArray(inputA,inputB,a,b);           
    }
    

	return 0;
}
