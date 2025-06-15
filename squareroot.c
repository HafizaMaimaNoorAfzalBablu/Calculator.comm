#include <stdio.h>
#include <math.h>

double square_root(long long n)
{
    if (n < 0)
    {
        printf("Error: Square root of negative numbers doesn't exist.\n");
        return -1;
    }
    return sqrt(n);
}

int main()
{
    long long num;
    double res;
    printf("Enter a number for square root: ");
    if (scanf("%lld", &num) != 1)
    {
        printf("Error: Invalid input!\n");
        return 1;
    }
    res = square_root(num);
    if (res != -1)
    {
        printf("Square root of %lld = %.2lf\n", num, res);
    }
    return 0;
}