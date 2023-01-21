#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int marsExploration(char* s) 
{
    int count = 0;
    int i = 0;
    while (*(s+i) != '\0') 
    {
        if((i-1)%3 == 0)
        {
            if(*(s+i) != 'O')
            {
                count++;
            }
        }
        else 
        {
            if(*(s+i) != 'S')
            {
                count++;
            }
        }
        i++;
    }
    return count;

}

int main()
{
    char *str; 
    str = "SOSSSOSOSOOO";
    int result = marsExploration(str);

    printf("%d\n", result);

    return 0;
}
