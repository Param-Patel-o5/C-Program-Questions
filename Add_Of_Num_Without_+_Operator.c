// additon of 2 numbers without + operator

#include <stdio.h>

int main()
{
    int number_1, number_2;
    printf("Please enter the Number 1: ");
    scanf("%d", &number_1);
    printf("Please enter the Number 2: ");
    scanf("%d", &number_2);

    while (number_2 > 0)
    {
        number_1++;
        number_2--;
    }

    printf("%d", number_1);
    return(0);
}