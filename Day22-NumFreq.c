#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void numFreq(char* str)
{
    int count,i,j;
    char digit = '0';
    for(j = 0; j<10; j++)
    {
        count=0;
        for(i = 0; *(str+i)!='\0'; i++) 
        {
            if(*(str+i) == digit)
            {
                count++;
            }    
        }
        printf("%d ",count);
        digit++;
    }
    
}
int main() 
{  
    char *str; 
    str = (char *)malloc(sizeof(char)*20);
    scanf("%s",str);
    int howManyGames(int p, int d, int m, int s) 
{
    // Return the number of games you can buy
    int count = 0;
    int sum = 0;
    
    for (int i=0; sum <= s; i += d) 
    {
        if((p - i) > m)
        {
            count++;
            sum += (p-i);
        }
        else  
        {
            sum += m;
            count++;
        }
    }
    if((sum+m) > s)
    {
        count--;
    }
    return count;
    
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char** first_multiple_input = split_string(rtrim(readline()));

    int p = parse_int(*(first_multiple_input + 0));

    int d = parse_int(*(first_multiple_input + 1));

    int m = parse_int(*(first_multiple_input + 2));

    int s = parse_int(*(first_multiple_input + 3));

    int answer = howManyGames(p, d, m, s);

    fprintf(fptr, "%d\n", answer);

    fclose(fptr);

    return 0;
}

    numFreq(str);

    return 0;
}
