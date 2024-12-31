// to check whether the given number is PALINDROME or not
#include <stdio.h>

int main()
{
    int number, result = 0, Q, Remainder;
    printf("PLease enter the Number: ");
    scanf("%d", &number);
    
    Q = number;

    while (Q != 0)
    {
        Remainder = Q % 10;
        result = result * 10 + Remainder;
        Q = Q / 10;
    }

    if (result == number)
        printf("Its a Palindrome ");
    else
        printf("No! its not a palindrome");
    return 0;
}