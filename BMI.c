#include <stdio.h>

float calculateBMI()
{
    float weight, height, BMI;
    do
    {
        printf("\nEnter your weight in kilograms: ");
        scanf("%f", &weight);
        printf("Enter your height in meters: ");
        scanf("%f", &height);
        if (weight <= 0 || height <= 0)
        {
            printf("Invalid input! Please enter positive values.\n");
        }
    } while (weight <= 0 || height <= 0);

    BMI = weight / (height * height);
    return BMI;
}
void categorisedBMI()
{
    float bmi;
    char option;
    do
    {
        bmi = calculateBMI();
        printf("\nYour BMI is: %.2f\n", bmi);
        if (bmi < 18.5)
        {
            printf("Health Category: Underweight\n");
        }
        else if (bmi >= 18.5 && bmi <= 24.9)
        {
            printf("Health Category: Normal weight\n");
        }
        else if (bmi >= 25 && bmi <= 29.9)
        {
            printf("Health Category: Overweight\n");
        }
        else
        {
            printf("Health Category: Obese\n");
        }
        printf("\nDo you want to calculate another BMI? (y/n): ");
        scanf(" %c", &option); 
    } while (option == 'y' || option == 'Y');
    printf("\nThank you for using the BMI Calculator!\n");
}
int main()
{
    categorisedBMI();
    return 0;
}
