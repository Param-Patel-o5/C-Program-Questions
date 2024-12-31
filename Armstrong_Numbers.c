// to check whether the given number is ARMSTRONG or not
// ARMSTRONG number is a number that is equal to the sum of its digits, each raised to the power of the number of digits in the number
#include <stdio.h>
#include <math.h>

int main()
{
    int number, count = 0;
    printf("PLease enter the Number: ");
    scanf("%d", &number);

    int Q = number;

    while (Q != 0)
    {
        Q = Q / 10;
        count++;
    }

    int remainder, sum = 0, P;
    P = number;

    while (P != 0)
    {
        remainder = P % 10;

        sum = sum + (int)round(pow(remainder, count));

        P = P / 10;
    }

    if (sum == number)
    {
        printf("Number is Armstrong Number");
    }
    else
    {
        printf("No! Number is not an Armstrong Number ");
    }
}