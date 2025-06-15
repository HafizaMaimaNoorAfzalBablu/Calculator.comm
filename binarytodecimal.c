#include <stdio.h>
#include <math.h>
// convert binary array to decimal
int binaryToDecimal(int bin[], int size)
{
    int decimal = 0;
    for (int i = 0; i < size; i++)
    {
        decimal = decimal + bin[i] * pow(2, size - 1 - i);
    }
    return decimal;
}

int main()
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
    return 0;
}