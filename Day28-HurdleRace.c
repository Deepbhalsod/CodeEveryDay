#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hurdleRace(int k, int height_count, int* height) 
{
    int  i=0;
    int max = *(height+0);
    while (*(height+i) != '\0')
    {
        if(max < *(height+i))
            max = *(height+i);
        i++;
    }
    if((max-k)<0)
        return 0;
    else 
        return max-k;

}

int main()
{
    int n,k;
    scanf("%d %d",n,k);
    int height[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d",(height + i));
    }

    int result = hurdleRace(k, n, height);

    printf("%d\n", result);

    return 0;
}
