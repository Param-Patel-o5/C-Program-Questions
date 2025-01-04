// Print floyd's triangle of given row number

#include <stdio.h>

int main()
{
    int rows;
    printf("Please enter the number of rows: ");
    scanf("%d", &rows);
    int N = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", N);
            N++;
        }
        printf("\n");
    }
}
