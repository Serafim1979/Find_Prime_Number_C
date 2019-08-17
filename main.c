#include <stdio.h>
#include <stdlib.h>
#include <math.h>
///////////////////////////////////
int find_prime_Num(int limit);
///////////////////////////////////
int main()
{
    find_prime_Num(100);
    return 0;
}
///////////////////////////////////
int find_prime_Num(int limit)
{
    int t, i, count = 0, flag;
    if(limit <= 0);
    else
    {
		printf("1 ");
        for(t = 2; t <= limit;t++)
        {
            flag = 1;
            for(i = 2; i * i <= t; i++)
            {
                if(t % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                printf("%d ", t);
                count++;
            }
        }
    }
    return count;
}
