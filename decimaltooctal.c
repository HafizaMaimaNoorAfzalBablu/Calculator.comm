#include <stdio.h>

void decimalToOctal(int num) {
    int octal[100]; // To store reminder digits in it
    int i = 0; // index for octal array

    if (num == 0) {
        printf("Octal: 0\n");
        return;
    }

    while (num != 0) {
        octal[i] = num % 8; 
        num /= 8;
        i++;
    }

    // Print the octal digits in reverse order
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    decimalToOctal(number);
    return 0;
}