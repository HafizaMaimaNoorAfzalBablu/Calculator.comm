#include <stdio.h>
#include <math.h>
double cuberoot(double num)
{
    return cbrt(num);
}

int main()
{
    double n;
    printf("Enter a number to find its cube root: ");
    if (scanf("%lf", &n) != 1)
    {
        printf("Error: Invalid input. Please enter a number.\n");
        return 1;
    }
    double result = cuberoot(n);
    printf("The cube root of %.2f is %.6f\n", n, result);
    return 0;
}
