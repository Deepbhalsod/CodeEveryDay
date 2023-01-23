#include <stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,temp,flag=0;
	    scanf("%d",&n);
	    char s[n];
	    scanf("%s",s);
	    if(n%2==0)
	    {
    	    for(int i=0;i<n;i++)
    	    {
    	        temp=0;
    	        for(int j=0;j<n;j++)
    	        {
    	            if(s[i]==s[j])
    	                temp++;
    	        }
    	        if(temp%2==0)
    	        {
    	            flag=1;
    	        }
    	        else
    	        {
    	            flag=0; 
    	            break;
    	        }
    	    }
    	    if(flag==1)
    	        printf("YES\n");
    	    else
    	        printf("NO\n");
	    } 
	    else
	    {
	        printf("NO\n");
	    }
	    
	}	return 0;
}
