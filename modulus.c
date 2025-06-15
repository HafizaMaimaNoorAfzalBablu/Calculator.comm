#include <stdio.h>

long long modulus(long long a, long long b)
{
    if (b == 0)
    {
        printf("Error: Modulus by zero!\n");
        return 0;
    }
    return a % b;
}

int main()
{
    long long num1, num2;
    printf("Enter two numbers for modulus: ");
    if (scanf("%lld %lld", &num1, &num2) != 2)
    {
        printf("Error: Invalid input!\n");
        return 1;
    }
    printf("%lld %% %lld = %lld\n", num1, num2, modulus(num1, num2));
    return 0;
}