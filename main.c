#include <stdio.h>
#include <stdlib.h>
#include <math.h>
///////////////////////////////////
int find_prime_Num(int limit);
///////////////////////////////////
int main()
{
    int ans;
    printf("Enter a limit of numbers to calculate: \n");
    scanf("%d", &ans);
    printf("\nNumber of primes = %d ",find_prime_Num(ans));
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
        count++;
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
