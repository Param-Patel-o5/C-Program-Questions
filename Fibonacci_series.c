// Print fibonacci series till given input N

#include <stdio.h>

int main()
{
    int N;
    printf("Please enter the Number: ");
    scanf("%d", &N);

    int a = 0, b = 1, result;

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }
}