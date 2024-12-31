// To check whether the given number is STRONG number or not
// Strong Number is a number in which the sum of factorial of individual digits of a number is equal to the orginal number

#include <stdio.h>

int main()
{
    int number, remainder, sum = 0;
    printf("Please enter the Number: ");
    scanf("%d", &number);

    int P = number;

    while (P != 0)
    {
        int factorial = 1;
        remainder = P % 10;
        for (; remainder > 0; remainder--)
        {
            factorial = factorial * remainder;
        }
        sum = sum + factorial;
        P = P / 10;
    }

    if (sum == number)
    {
        printf("Number is Strong Number");
    }
    else
    {
        printf("No! Number is not an Strong Number ");
    }
}