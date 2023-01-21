#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* caesarCipher(char* s, int k) 
{
    int i = 0;
    k = k%26;
    char *str; 
    str = (char *)malloc(sizeof(char)*200);
    while (*(s+i) != '\0') 
    {
        if((*(s+i)>= 'A' && *(s+i)<= 'Z'))
        {
            if((*(s+i) + k) > 'Z' )
            {
                *(str+i) = *(s+i) - (26-k);
            }
            else
            {
                *(str+i) = *(s+i) + k;
            }
        }
        else if(*(s+i)>= 'a' && *(s+i)<= 'z')
        {
            if((*(s+i) + k) > 'z')
            {   
                *(str+i) = *(s+i) - (26-k);
            }
            else 
            {
                *(str+i) = *(s+i) + k;
            }
        }
        else 
        {
            *(str+i) = *(s+i);
        }  
        i++;
    }
    *(str+i) = '\0';
    return str;
}

int main()
{
    char* s = "!m-rB`-oN!.W`cLAcVbN/CqSoolII!SImji.!w/`Xu`uZa1TWPRq`uRBtok`xPT`lL-zPTc.BSRIhu..-!.!tcl!-U";
    int k = 62;

    char* result = caesarCipher(s, k);

    printf("%s\n", result);

    return 0;
}