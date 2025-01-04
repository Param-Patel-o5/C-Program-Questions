// Binary to decimal converstion on the basis of given input of binary number 

#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("PLease enter the Number: ");
    scanf("%d", &number);

    int remainder, sum = 0, i = 0;

    while (number != 0)
    {
        remainder = number % 10;
        sum = sum + remainder * pow(2, i);

        number = number / 10;
        i++;
    }
    printf("%d", sum);
}