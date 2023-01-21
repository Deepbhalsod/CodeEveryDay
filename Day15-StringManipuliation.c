#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char *stringManipulation(char*, int);
int main()
{
    char *str;	
	str = (char *)malloc(sizeof(char)*20);
    printf("\n Enter String : ");
	scanf("%[^\n]s",str);
	
	
    // int strLen = strlen(str);

    printf("%s",stringManipulation(str,strlen(str)));
	
	
	return 0;
}
char *stringManipulation(char* str, int strLen)
{
    char *newStr;
    newStr = (char *)malloc(sizeof(char)*20);
    int i,j;
    int flag;
    int setter=0;
    for (i = 0; *(str+i)!='\0'; i++)
    {
    	flag=0;
        for (j = 0; *(newStr+j)!='\0'; j++)
        {
            if(*(str+i) == *(newStr+j))
            {
                flag=1;
        	}	
        }
        if(flag == 0)
        {
        	*(newStr+setter) = *(str+i);
        	setter++;
		}
    }
	*(newStr+setter)='\0';
    return newStr;
}




//int main()
//{
//	char *str;
//    char *newStr;
//
//	str = (char *)malloc(sizeof(char)*20);
//	newStr = (char *)malloc(sizeof(char)*20);
//	
//	printf("\n Enter String : ");
//	scanf("%[^\n]s",str);
//	
//    int strLen = strlen(str);
//    int i,j;
//    int flag;
//    int setter=0;
//    for (i = 0; *(str+i)!='\0'; i++)
//    {
//    	flag=0;
//        for (j = 0; *(newStr+j)!='\0'; j++)
//        {
//            if(*(str+i) == *(newStr+j))
//            {
//                flag=1;
//        	}	
//        }
//        if(flag == 0)
//        {
//        	*(newStr+setter) = *(str+i);
//        	setter++;
//		}
//    }
//	*(newStr+setter)='\0';
//
//    printf("Your string is %s",newStr);
//	
//	
//	return 0;
//}   