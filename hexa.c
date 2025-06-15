#include <stdio.h>

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

int main()
{
    int dec_value;

    printf("Enter a decimal number: ");
    scanf("%d", &dec_value);

    convertToHex(dec_value);

    return 0;
}