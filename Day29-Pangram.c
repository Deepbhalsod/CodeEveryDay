#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* pangrams(char* s) 
{
    int i = 0;
    int alp[26] = {0};
    while(*(s+i) != '\0')
    {
        if(*(s+i) >= 'a' && *(s+i) <= 'z')
            alp[*(s+i) - 'a'] = 1;
        else if (*(s+i) >= 'A' && *(s+i) <= 'Z') 
            alp[*(s+i) - 'A'] = 1;
        i++;
    }
    for (int j = 0; j<26; j++) 
    {
        if(alp[j] == 0)
            return "not pangram";
    }
    return "pangram";
}

int main()
{
    //char* s = "We promptly judged antique ivory buckles for the next prize";
    char* s = "We promptly judged antique ivory buckles for the prize";

    char* result = pangrams(s);
    printf("%s\n", result);

    return 0;
}
