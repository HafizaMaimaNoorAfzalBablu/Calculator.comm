#include <stdio.h>
void decimalToBinary(int num, int bin[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        bin[i] = num % 2;
        num = num / 2;
    }
}

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
    // secondly  Add 1 to get 2's complement
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
int main()
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
        int negNum = -num; 
        decimalToBinary(negNum, bin, SIZE);
        twosComplement(bin, SIZE);
        printf("Binary (negative using 2's complement): ");
        printBinary(bin, SIZE);
    }

    return 0;
}