#include <stdio.h>
#include <math.h>
#define PI 3.14159265
// Function to check if angle is an odd multiple of a base (e.g., 90°)
int isOddMultiple(double angle, double base)
{
    if (fmod(angle, base) == 0)
    {
        int k = (int)((angle / base - 1) / 2);
        double check = base * (2 * k + 1);
        return fabs(check - angle) < 0.0001;
    }
    return 0;
}
void calculateTrig(double deg)
{
    double rad = deg * PI / 180.0;
    double sinVal = sin(rad);
    double cosVal = cos(rad);
    double tanVal = tan(rad);
    printf("\nAngle in radians: %.4f\n", rad);
    printf("sin = %.4f\n", sinVal);
    printf("cos = %.4f\n", cosVal);
    if (isOddMultiple(deg, 90.0))
    {
        printf("tan = undefined (odd multiple of 90°)\n");
        printf("sec = undefined (odd multiple of 90°)\n");
    }
    else
    {
        printf("tan = %.4f\n", tanVal);
        printf("sec = %.4f\n", 1 / cosVal);
    }
    if (fabs(tanVal) < 0.000001)
    {
        printf("cot = undefined (tan is 0)\n");
    }
    else
    {
        printf("cot = %.4f\n", 1 / tanVal);
    }
    if (fabs(sinVal) < 0.000001)
    {
        printf("cosec = undefined (sin is 0)\n");
    }
    else
    {
        printf("cosec = %.4f\n", 1 / sinVal);
    }
}

int main()
{
    double degrees;
    printf("Enter angle in degrees: ");
    scanf("%lf", &degrees);
    calculateTrig(degrees);
    return 0;
}
