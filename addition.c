#include <stdio.h>

double add(double a, double b)
{
    return a + b;
}

int main()
{
    double num1, num2;
    printf("Enter two numbers to add: ");
    if (scanf("%lf %lf", &num1, &num2) != 2)
    {
        printf("Error: Invalid input!\n");
        return 1;
    }
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, add(num1, num2));
    return 0;
}