#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n,d;
    scanf("%d%d",&n,&d);
    int counter = 0;
    int a[n],arr[n];
    for (i = 0; i<n; i++) 
    {
        scanf("%d",&a[i]);
    }
    int s = n-d;
    while(counter!=(n))
    {
        if(s==(n))
            s = 0; 
        arr[s] = a[counter];
        counter++;
        s++;
    }
    for (i = 0; i<n; i++) 
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
