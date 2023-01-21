#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* isBalanced(char* s) 
{
    int i=0,top=0;
    char stack[100] = ""; 

    while(s[i] != '\0') 
    {   
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            stack[top++] = s[i];
        }
        else
        {
            if(strlen(stack)==0)
                return "NO";
            if(s[i]==')' && stack[top-1]!='(')
                return "NO";
            if(s[i]=='}' && stack[top-1]!='{')
                return "NO";
            if(s[i]==']' && stack[top-1]!='[')
                return "NO";
                
            stack[top-1]='\0';
            top--;
        }
        i++;
    }
    if (strlen(stack)!=0) 
        return "NO";
    return "YES";

}
int main()
{
	char exp[100] = "()([]({}[]){}){}{()}[]{}[]()(()([[]]()))()()()[]()(){{}}()({[{}][]}[[{{}({({({})})})}]])";

	// Function call
	if (isBalanced(exp)=="YES")
		printf("Balanced \n");
	else
		printf("Not Balanced \n");
    
    return 0;

}