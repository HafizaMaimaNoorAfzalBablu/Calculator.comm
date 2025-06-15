#include <stdio.h>
double factorial(double n)
{
    if (n < 0)
    {
        printf("Error: Factorial of negative numbers doesn't exist.\n");
        return -1;
    }
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    double num, res;
    printf("Enter a number for factorial: ");
    if (scanf("%lf", &num) != 1)
    {
        printf("Error: Invalid input!\n");
        return 1;
    }
    res = factorial(num);
    if (res != -1)
    {
        printf("%.2lf! = %.2lf\n", num, res);
    }
    return 0;
}