#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(long long a, long long b);
long long modulus(long long a, long long b);
double square_root(long long n);
double cuberoot(double num);
double power(double base, double exponent);
double factorial(double n);
int isOddMultiple(double angle, double base);
void calculateTrig(double deg);
void calculateLogarithms(double num);
double calcudis(double a, double b, double c);
void printrealdisroot(double a, double b, double c);
void repeated(double a, double b, double c);
void complex(double a, double b, double c);
void solve(double a, double b, double c);
float calculateBMI();
void categorisedBMI();
float cel(float temp);
float fah(float temp);
void decimalToBinary(int num, int bin[], int size);
void twosComplement(int bin[], int size);
void printBinary(int bin[], int size);
int binaryToDecimal(int bin[], int size);
void decimalToOctal(int num);
void convertToHex(int dec_value);

int main()
{
    char c;
    printf("\t\t\t\t========================================================\n");
    printf("\t\t\t\t\t\t WELCOME To Our CALCULATOR\n");
    printf("\t\t\t\t========================================================\n");
    do
    {
        printf("Choose what kind of calculation you want to made:\n\n");

        printf("1: Simple Calculator\n");
        printf("2: Quadretic Calculation\n");
        printf("3: BMI Calculator\n");
        printf("4: Tempereture Conversion\n");
        printf("5: Number System Conversion\n");
        printf("Enter choice:");
        int num;
        scanf("%d", &num);
        printf("\n");
        switch (num)
        {
        case 1:
        {
            char ch;
            FILE *ptr;
            ptr = fopen("history.txt", "a");
            if (ptr == NULL)
            {
                printf("Error opening history file!\n");
                return 1;
            }
            do
            {
                int choice;
                printf("\t\t\t\t=========== Welcome ===========\n\n");
                printf("Choose Any:\n");
                printf("1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: Modulus\n");
                printf("6: Square Root\n7: Cube Root\n8: Power\n9: Factorial\n10: Trigonometry\n11:Logrithm\n12:History View\n");
                printf("Enter choice:");
                scanf("%d", &choice);
                printf("\n");
                switch (choice)
                {
                case 1:
                {
                    double num1, num2;
                    while (1)
                    {
                        printf("Enter two numbers to add: ");
                        if (scanf("%lf %lf", &num1, &num2) == 2)
                            break;
                        else
                        {
                            printf("Error: Invalid input! Please enter two valid numbers.\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, add(num1, num2));
                    fprintf(ptr, "Addition: %.2lf + %.2lf = %.2lf\n", num1, num2, add(num1, num2));
                    fflush(ptr);
                    break;
                }

                case 2:
                {
                    double num1, num2;
                    while (1)
                    {
                        printf("Enter two numbers to subtract: ");
                        if (scanf("%lf %lf", &num1, &num2) == 2)
                            break;
                        else
                        {
                            printf("Error: Invalid input!\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, subtract(num1, num2));
                    fprintf(ptr, "Subtraction: %.2lf - %.2lf = %.2lf\n", num1, num2, subtract(num1, num2));
                    fflush(ptr);
                    break;
                }

                case 3:
                {
                    double num1, num2;
                    while (1)
                    {
                        printf("Enter two numbers to multiply: ");
                        if (scanf("%lf %lf", &num1, &num2) == 2)
                            break;
                        else
                        {
                            printf("Error: Invalid input!\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiply(num1, num2));
                    fprintf(ptr, "Multiplication: %.2lf * %.2lf = %.2lf\n", num1, num2, multiply(num1, num2));
                    fflush(ptr);
                    break;
                }

                case 4:
                {
                    long long num1, num2;
                    double res;
                    while (1)
                    {
                        printf("Enter two numbers to divide: ");
                        if (scanf("%lld %lld", &num1, &num2) == 2)
                        {
                            if (num2 == 0)
                            {
                                printf("Error: Division by zero is not allowed.\n");
                                continue;
                            }
                            break;
                        }
                        else
                        {
                            printf("Error: Invalid input!\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    res = divide(num1, num2);
                    printf("%lld / %lld = %.2f\n", num1, num2, res);
                    fprintf(ptr, "Division: %lld / %lld = %.2f\n", num1, num2, res);
                    fflush(ptr);
                    break;
                }
                case 5:
                {

                    long long num1, num2;
                    while (1)
                    {
                        printf("Enter two numbers for modulus: ");
                        if (scanf("%lld %lld", &num1, &num2) == 2)
                            break;
                        else
                        {
                            printf("Error: Invalid input!\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    printf("%lld %% %lld = %lld\n", num1, num2, modulus(num1, num2));
                    fprintf(ptr, "Modulus: %lld %% %lld = %lld\n", num1, num2, modulus(num1, num2));
                    fflush(ptr);
                    break;
                }
                case 6:
                {

                    long long num;
                    double res;
                    while (1)
                    {
                        printf("Enter a number for square root: ");
                        if (scanf("%lld", &num) == 1)
                            break;
                        else
                        {
                            printf("Error: Invalid input!\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    res = square_root(num);
                    if (res != -1)
                    {
                        printf("Square root of %lld = %.2lf\n", num, res);
                        fprintf(ptr, "Square Root: sqrt(%lld) = %.2lf\n", num, res);
                        fflush(ptr);
                    }
                    break;
                }
                case 7:
                {

                    double n;
                    while (1)
                    {
                        printf("Enter a number to find its cube root: ");
                        if (scanf("%lf", &n) == 1)
                            break;
                        else
                        {
                            printf("Error: Invalid input. Please enter a number.\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    double result = cuberoot(n);
                    printf("The cube root of %.2f is %.6f\n", n, result);
                    fprintf(ptr, "Cube Root: cbrt(%.2f) = %.6f\n", n, result);
                    fflush(ptr);
                    break;
                }
                case 8:
                {

                    double base, exponent, res;
                    while (1)
                    {
                        printf("Enter base and exponent: ");
                        if (scanf("%lf %lf", &base, &exponent) == 2)
                            break;
                        else
                        {
                            printf("Error: Invalid input!\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    res = power(base, exponent);
                    printf("%.2lf^%.2lf = %.2lf\n", base, exponent, res);
                    fprintf(ptr, "Power: %.2lf ^ %.2lf = %.2lf\n", base, exponent, res);
                    fflush(ptr);
                    break;
                }
                case 9:
                {

                    double num, res;
                    while (1)
                    {
                        printf("Enter a number for factorial: ");
                        if (scanf("%lf", &num) == 1)
                            break;
                        else
                        {
                            printf("Error: Invalid input!\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    res = factorial(num);
                    if (res != -1)
                    {
                        printf("%.2lf! = %.2lf\n", num, res);
                        fprintf(ptr, "Factorial: %.2lf! = %.2lf\n", num, res);
                        fflush(ptr);
                    }
                    break;
                }
                case 10:
                {
                    double degrees;
                    while (1)
                    {
                        printf("Enter angle in degrees: ");
                        if (scanf("%lf", &degrees) == 1)
                        {
                            calculateTrig(degrees);
                            break;
                        }
                        else
                        {
                            printf("Invalid input! Please enter a valid number.\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    break;
                }
                case 11:
                {

                    double number;
                    while (1)
                    {
                        printf("Enter a positive number: ");
                        if (scanf("%lf", &number) == 1 && number > 0)
                        {
                            calculateLogarithms(number);
                            break;
                        }
                        else
                        {
                            printf("Invalid input! Please enter a positive number only.\n");
                            while (getchar() != '\n')
                                ;
                        }
                    }
                    break;
                }
                case 12:
                {
                    FILE *readPtr = fopen("history.txt", "r");
                    if (readPtr == NULL)
                    {
                        printf("No history found or error opening file.\n");
                    }
                    else
                    {
                        char line[1000];
                        printf("\n\t\t\t======= Calculation History =======\n\n");
                        while (fgets(line, sizeof(line), readPtr))
                        {
                            printf("%s", line);
                        }
                        printf("\t\t\t===================================\n");
                        fclose(readPtr);
                    }
                    break;
                }
                default:
                    printf("Invalid option. Please try again.\n");
                    break;
                }
                do
                {
                    printf("\n\t\t\t======== Do you want to make another calculation? (y/n) ========\n");
                    ch = getche();
                    printf("\n");
                    if (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N')
                    {
                        printf("Please enter (y/n)\n");
                    }
                } while (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N');

            } while (ch == 'y' || ch == 'Y');
            fclose(ptr);
            system("cls");
            break;
        case 2:
        {
            char ch;
            printf("\t\t\t=========== Welcome to Quadretic Calculator ============\n\n");
            do
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
                do
                {
                    printf("\t\t\t======= Do You want to continue(y/n) =======\n\n");
                    ch = getche();
                    if (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N')
                    {
                        printf("Please enter (y/n)");
                    }
                } while (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N');
            } while (ch == 'y' || ch == 'Y');
            system("cls");
            break;
        }
        case 3:
        {
            printf("\t\t\t======= Welcome to the BMI Calculator =======\n\n");
            categorisedBMI();
            break;
        }
        case 4:
        {
            float temp;
            int choice, ch;
            do
            {
                printf("\t\t\t========== Welcome to Temperatire converter ============\n\n");
                do
                {
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
                } while (choice != 2 && choice != 1);
                do
                {
                    printf("\t\t\t======= Do you want to use it again(y/n) =======\n\n");
                    ch = getche();
                    if (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N')
                    {
                        printf("Please enter (y/n)");
                    }
                } while (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N');
            } while (ch == 'y' || ch == 'Y');
            system("cls");
            break;
        }
        case 5:
        {
            char n;
            printf("\t\t\t======== Welcome to Number system Converter ========\n\n");
            do
            {
                int ch;
                printf("Enter choice:\n");
                printf("1: Decimal to Binary\n2: Binary to Decimal\n3: Decimal to Octal\n4: Decimal to Hexa\n");
                printf("Enter choice:");
                scanf("%d", &ch);
                switch (ch)
                {
                case 1:
                {
                    const int SIZE = 8;
                    int bin[SIZE];
                    // Set all bin elements to zero
                    for (int i = 0; i < SIZE; i++)
                        bin[i] = 0;
                    int num;
                    printf("Enter a decimal number: ");
                    scanf("%d", &num);
                    if (num >= 0)
                    {
                        decimalToBinary(num, bin, SIZE);
                        printf("Binary (positive): ");
                        printBinary(bin, SIZE);
                    }
                    else
                    {
                        int negNum = -num; // in case of negative take absolute value then convert it in decTobin
                        decimalToBinary(negNum, bin, SIZE);
                        twosComplement(bin, SIZE);
                        printf("Binary (negative using 2's complement): ");
                        printBinary(bin, SIZE);
                    }
                    break;
                }
                case 2:
                {
                    int size;
                    printf("Enter number of bits in binary number: ");
                    scanf("%d", &size);
                    int bin[size];
                    printf("Enter binary numbers:\n");
                    for (int i = 0; i < size; i++)
                    {
                        do
                        {
                            printf("Bit %d: ", i);
                            scanf("%d", &bin[i]);
                            if (bin[i] != 0 && bin[i] != 1)
                                printf("Invalid! Enter 0 or 1 only.\n");
                        } while (bin[i] != 0 && bin[i] != 1);
                    }
                    int result = binaryToDecimal(bin, size);
                    printf("Decimal value = %d\n", result);
                    break;
                }
                case 3:
                {
                    int number;
                    printf("Enter a decimal number: ");
                    scanf("%d", &number);
                    decimalToOctal(number);
                    break;
                }
                case 4:
                {
                    int dec_value;
                    printf("Enter a decimal number: ");
                    scanf("%d", &dec_value);
                    convertToHex(dec_value);
                    break;
                }
                }
                do
                {
                    printf("\t\t\t======= Do you want to continue(y/n) =======\n\n");
                    n = getche();
                    if (n != 'Y' && n != 'y' && n != 'n' && n != 'N')
                    {
                        printf("Please enter(y/n) ");
                    }
                } while (n != 'Y' && n != 'y' && n != 'n' && n != 'N');
            } while (n == 'y' || n == 'Y');
            system("cls");
        }
        }
        }
        do
        {
            printf("\n\t\t\t========= Do You want to use our calculator again(y/n) ==========\n\n");
            scanf(" %c", &c);
            if (c != 'y' && c != 'Y' && c != 'n' && c != 'N')
            {
                printf("Invalid! Please enter (y/n)");
            }
        } while (c != 'Y' && c != 'y' && c != 'n' && c != 'N');
    } while (c == 'y' || c == 'Y');

    printf("\t\t\t============= Thanks for Using our Calculator ============\n");
    return 0;
}
// Addtion function
double add(double a, double b)
{
    return a + b;
}
// Subtraction function
double subtract(double a, double b)
{
    return a - b;
}
// Multiplication function
double multiply(double a, double b)
{
    return a * b;
}
// Division function
double divide(long long a, long long b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowded!\n");
        return 0;
    }
    return (double)a / b;
}
// Modulus function
long long modulus(long long a, long long b)
{
    if (b == 0)
    {
        printf("Error: Modulus by zero!\n");
        return 0;
    }
    return a % b;
}
// Square root function
double square_root(long long n)
{
    if (n < 0)
    {
        printf("Error: Square root of negative numbers doesn't exist.\n");
        return -1;
    }
    return sqrt(n);
}
// Cube root function
double cuberoot(double num)
{
    return cbrt(num);
}
// Power function
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
// Factorial function
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
#define PI 3.14159265
// Function to check if angle is an odd multiple of a base (like  90)
int isOddMultiple(double angle, double base)
{
    if (fmod(angle, 90.0) == 0)
    {
        int k = (int)((angle / 90.0 - 1) / 2);
        double check = 90.0 * (2 * k + 1);
        return fabs(check - angle) < 0.0001;
    }
    return 0;
}
// Trigonometry function
void calculateTrig(double deg)
{
    double rad = deg * PI / 180.0;
    double sinVal = sin(rad);
    double cosVal = cos(rad);
    double tanVal = tan(rad);
    printf("\nAngle in radians: %.4f\n", rad);
    printf("sin = %.4f\n", sinVal);
    printf("cos = %.4f\n", cosVal);
    FILE *ptr = fopen("history.txt", "a");
    if (ptr != NULL)
    {
        fprintf(ptr, "Trigonometry for %.2lf degrees:\n", deg);
        fprintf(ptr, "  sin = %.4f\n  cos = %.4f\n", sinVal, cosVal);
        if (isOddMultiple(deg, 90.0))
        {
            fprintf(ptr, "  tan = undefined\n  sec = undefined\n");
            fflush(ptr);
        }
        else
        {
            fprintf(ptr, "  tan = %.4f\n  sec = %.4f\n", tanVal, 1 / cosVal);
            fflush(ptr);
        }
        if (fabs(tanVal) < 0.000001)
        {
            fprintf(ptr, "  cot = undefined\n");
            fflush(ptr);
        }
        else
        {
            fprintf(ptr, "  cot = %.4f\n", 1 / tanVal);
            fflush(ptr);
        }

        if (fabs(sinVal) < 0.000001)
        {
            fprintf(ptr, "  cosec = undefined\n");
            fflush(ptr);
        }
        else
        {
            fprintf(ptr, "  cosec = %.4f\n", 1 / sinVal);
            fflush(ptr);
        }
        fprintf(ptr, "\n");
        fclose(ptr);
    }
}
// Logarithm function
void calculateLogarithms(double num)
{
    if (num <= 0)
    {
        printf("Logarithm is undefined for zero or negative numbers.\n");
    }
    FILE *ptr = fopen("history.txt", "a");
    if (ptr != NULL)
    {
        fprintf(ptr, "Logarithms of %.4f:\n", num);
        fprintf(ptr, "  Natural log = %.4f\n", log(num));
        fprintf(ptr, "  Base-10 log = %.4f\n\n", log10(num));
        fclose(ptr);
    }
}
// Discriminent function
double calcudis(double a, double b, double c)
{
    return b * b - 4 * a * c;
}
// For real root
void printrealdisroot(double a, double b, double c)
{
    double dis = calcudis(a, b, c);
    if (dis > 0)
    {
        double s = (-b + sqrt(dis)) / (2 * a);
        double d = (-b - sqrt(dis)) / (2 * a);
        printf("2 real distinct roots:\n");
        printf("Root 1: %lf\n", s);
        printf("Root 2: %lf\n", d);
    }
    else
    {
        printf("Invalid (not two distinct real roots)\n");
    }
}
// For repeated root
void repeated(double a, double b, double c)
{
    double dis = calcudis(a, b, c);
    if (dis == 0)
    {
        double s = -b / (2 * a);
        printf("One real repeated root:\n");
        printf("Root: %lf\n", s);
    }
    else
    {
        printf("Invalid (not a repeated root)\n");
    }
}
// Comples root
void complex(double a, double b, double c)
{
    double dis = calcudis(a, b, c);
    if (dis < 0)
    {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-dis) / (2 * a);
        printf("Complex conjugate roots:\n");
        printf("Root 1: %lf + %lfi\n", realPart, imagPart);
        printf("Root 2: %lf - %lfi\n", realPart, imagPart);
    }
}
// Calculation for equation
void solve(double a, double b, double c)
{
    double dis = calcudis(a, b, c);
    if (dis > 0)
    {
        printrealdisroot(a, b, c);
    }
    else if (dis == 0)
    {
        repeated(a, b, c);
    }
    else
    {
        complex(a, b, c);
    }
}
// BMI calculation
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
// Health catagory function
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
        do
        {
            printf("\n\t\t\t======= Do you want to calculate another BMI? (y/n) =======\n\n ");
            scanf(" %c", &option);

            if (option != 'y' && option != 'Y' && option != 'n' && option != 'N')
            {
                printf("Invalid input! Please enter 'y' for yes or 'n' for no.\n");
            }

        } while (option != 'y' && option != 'Y' && option != 'n' && option != 'N');

    } while (option == 'y' || option == 'Y');
    system("cls");
}
// Celcius to fahrenhiet
float cel(float temp)
{
    float feh = 0;
    feh = (temp * 9 / 5) + 32;
    printf("Temperature in Fahrenheit:%.3f\n", feh);
    return 0;
}
// Fahrenheit to celcius
float fah(float temp)
{
    float cel = 0;
    cel = (temp - 32) * 5 / 9;
    printf("Temperature in Celcius :%.3f\n", cel);
    return 0;
}
// Decimal to binary conversion
void decimalToBinary(int num, int bin[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        bin[i] = num % 2;
        num = num / 2;
    }
}
// if number is -ve
void twosComplement(int bin[], int size)
{
    // firstly takes  1's complement
    for (int i = 0; i < size; i++)
    {
        if (bin[i] == 1)
            bin[i] = 0;
        else
            bin[i] = 1;
    }
    int carry = 1;
    for (int i = size - 1; i >= 0; i--)
    {
        int sum = bin[i] + carry;
        bin[i] = sum % 2;
        carry = sum / 2;
    }
}
void printBinary(int bin[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", bin[i]);
    }
    printf("\n");
}
// Binary to decimal
int binaryToDecimal(int bin[], int size)
{
    int decimal = 0;
    for (int i = 0; i < size; i++)
    {
        decimal = decimal + bin[i] * pow(2, size - 1 - i);
    }
    return decimal;
}
// Decimal to octol
void decimalToOctal(int num)
{
    int octal[100]; // To store reminder digits in it
    int i = 0;      // index for octal array
    if (num == 0)
    {
        printf("Octal: 0\n");
        return;
    }
    while (num != 0)
    {
        octal[i] = num % 8;
        num /= 8;
        i++;
    }
    // Print the octal digits in reverse order
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");
}
// Decimal to hexadecimal
void convertToHex(int dec_value)
{
    char hex[50];
    int i = 0;
    if (dec_value == 0)
    {
        printf("Hexadecimal: 0\n");
        return;
    }
    while (dec_value > 0)
    {
        int remainder = dec_value % 16;
        // Convert to hex character
        if (remainder < 10)
            hex[i] = '0' + remainder;
        else
            hex[i] = 'A' + (remainder - 10);
        dec_value = dec_value / 16;
        i++;
    }
    // Print in reverse
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }
    printf("\n");
}