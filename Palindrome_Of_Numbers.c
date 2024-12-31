// to check whether the given number is PALINDROME or not
#include <stdio.h>

int main()
{
    int number, result = 0, P, Remainder;
    printf("Please enter the Number: ");
    scanf("%d", &number);
    
    P = number;

    while(P != 0)
    {
        Remainder = P % 10;
        result = result * 10 + Remainder;
        P = P / 10;
    }

    if (result == number)
        printf("Its a Palindrome ");
    else
        printf("No! its not a palindrome");
    return 0;
}