#include <stdio.h>
#include <math.h>
double calcudis(double a, double b, double c)
{
    return b * b - 4 * a * c;
}
void printRealDistinctRoots(double a, double b, double dis)
{
    double root1, root2;
    root1 = (-b + sqrt(dis)) / (2 * a);
    root2 = (-b - sqrt(dis)) / (2 * a);
    printf("Two real and distinct roots:\n");
    printf("Root 1: %lf\n", root1);
    printf("Root 2: %lf\n", root2);
}
void printRepeatedRoot(double a, double b)
{
    double root = -b / (2 * a);
    printf("One real and repeated root:\n");
    printf("Root: %lf\n", root);
}
void printComplexRoots(double a, double b, double dis)
{
    double real = -b / (2 * a);
    double imag = sqrt(-dis) / (2 * a);
    printf("Complex conjugate roots:\n");
    printf("Root 1: %lf + %lfi\n", real, imag);
    printf("Root 2: %lf - %lfi\n", real, imag);
}
void solve(double a, double b, double c)
{
    double dis = calcudis(a, b, c);
    if (dis > 0)
    {
        printRealDistinctRoots(a, b, dis);
    }
    else if (dis == 0)
    {
        printRepeatedRoot(a, b);
    }
    else
    {
        printComplexRoots(a, b, dis);
    }
}
int main()
{
    double a, b, c;
    printf("Enter coefficients a, b, and c of the quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        printf("Not a quadratic equation. 'a' should not be 0.\n");
    }
    else
    {
        solve(a, b, c);
    }
    return 0;
}
