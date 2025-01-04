// to check whether the given input is perfect number  or not
/*A perfect number is a positive integer that is equal to the
 sum of its positive proper divisors, which are its divisors excluding the number itself*/
#include <stdio.h>

int main()
{
    int N;
    printf("Please enter the number: ");
    scanf("%d", &N);

    int rem, i, sum = 0;
    for (i = 1; i < N; i++)
    {
        rem = N % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == N)
    {
        printf("Number is a perfect number ");
    }
    else
        printf("Number is not a perfect number ");
}