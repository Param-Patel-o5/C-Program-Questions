// to check whether the given input is leap year or not
#include <stdio.h>

int main()
{
    int N;
    printf("Please enter the year: ");
    scanf("%d", &N);

    if (N % 400 == 0)
        printf(" It's a leap year");
    else if (N % 100 == 0)
        printf("It's not a leap year");
    else if (N % 4 == 0)
        printf(" It's a leap year");
    else
        printf("It's not a leap year");
}