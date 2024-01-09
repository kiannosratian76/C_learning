#include <stdio.h>

int fibo_func(int length)
{
    int term1 = 0;
    int term2 = 1;
    int fib = 0;

    do
    {
        if (length < 3)
        {
            printf("length must be grater than 3");
        }
        printf("Enter your length");
        scanf("%d", &length);
        printf("iterative numbers\n");

        for (int i = 0; i < length; i++)
        {
            fib = term1 + term2;
            printf("%d\n", fib);
            term1 = term2;
            term2 = fib;
        }
    } while (length < 3);
}

int main()
{
    fibo_func(8);
}