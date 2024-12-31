// to check whether the given number is prime number or not

/*In order to find whether a number is prime or not
We first need to calclute the square root of that number and then divide that
number by numbers less than or quals to the squqre root of htat number .If it is
divisble by any of th numbers than we can say that the number is not a prime
 number else it is a prime number .*/

#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("PLease enter the Number: ");
    scanf("%d", &number);
    int count = 1;
    int to_check = round(sqrt(number));

    if (number == 1)
    {
        printf("No! Number is not a Prime Number");
        return 0; 
    }

    for (int i = 2; i <= to_check; i++)
    {

        if (number % i != 0)
        {
            count++;
        }
    }
    if (count == to_check)
    {
        printf("Number is Prime Number");
    }
    else
    {
        printf("No! Number is not a Prime Number ");
    }
}