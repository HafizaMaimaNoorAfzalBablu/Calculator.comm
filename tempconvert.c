#include <stdio.h>
#include <math.h>
float cel(float temp)
{
    float feh = 0;
    feh = (temp * 9 / 5) + 32;
    printf("Temperature in Fahrenheit:%.3f\n", feh);
    return 0;
}
float fah(float temp)
{
    float cel = 0;
    cel = (temp - 32) * 5 / 9;
    printf("Temperature in Celcius :%.3f\n", cel);
    return 0;
}
int main()
{
    float temp;
    int choice;
    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        cel(temp);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        fah(temp);
    }
    else
    {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }
    return 0;
}
