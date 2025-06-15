#include <stdio.h>
#include <math.h>
double power(double base, double exponent)
{
    if (exponent == 0)
        return 1;
    if (exponent < 0)
    {
        return 1.0 / pow(base, -exponent);
    }
    return pow(base, exponent);
}
int main()
{
    double base, exponent, res;
    printf("Enter base and exponent: ");
    if (scanf("%lf %lf", &base, &exponent) != 2)
    {
        printf("Error: Invalid input!\n");
        return 1;
    }
    res = power(base, exponent);
    printf("%.2lf^%.2lf = %.2lf\n", base, exponent, res);

    return 0;
}