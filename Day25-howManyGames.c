#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int p, d, m, s;
    int answer = howManyGames(p=20, d=3, m=6, s=80);
    printf("%d",answer);

    return 0;
}
