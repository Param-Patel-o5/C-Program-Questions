// Print pyramid patern by input of number of rows.
#include <stdio.h>

int main()
{  int i, j, number;
    printf("How many rows do you want in your pyramid \n");
    scanf("%d", &number);
   
    for (i = 1; i <= number; i++)
    {
        for (j = 1; j <= 2 * number - 1; j++)
        {
            if (j >= number - (i - 1) && j <= number + (i - 1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}