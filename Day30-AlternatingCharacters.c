#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int alternatingCharacters(char* s) 
{
    int k=0;
    
    for(int i=0; i<strlen(s)-1; i++)
    {
        int diff = *(s+i) - *(s+i+1);
        if(diff==0) 
            k++;   
    }
    return k;
}

int main()
{
    char* s = "ABABABAA";
    //char* s = "ABABABA";
    
    int result = alternatingCharacters(s);
    printf("%d\n", result);

    return 0;
}
