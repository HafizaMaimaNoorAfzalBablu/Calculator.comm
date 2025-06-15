#include <stdio.h>

double divide(long long a, long long b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowded!\n");
        return 0;
    }
    return (double)a / b;
}

int main()
{
    long long num1, num2;
    double res;
    printf("Enter two numbers to divide: ");
    if (scanf("%lld %lld", &num1, &num2) != 2)
    {
        printf("Error: Invalid input!\n");
        return 1;
    }
    res = divide(num1, num2);
    if (num2 != 0)
    {
        printf("%lld / %lld = %.2f\n", num1, num2, res);
    }
    return 0;
}