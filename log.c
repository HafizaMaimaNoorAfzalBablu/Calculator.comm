#include <stdio.h>
#include <math.h>

// Function to calculate logarithmic values
void calculateLogarithms(double num) {
    if (num <= 0) {
        printf("Logarithm is undefined for zero or negative numbers.\n");
    } else {
        printf("Natural log  of %.4f = %.4f\n", num, log(num));
        printf("Base-10 log of %.4f = %.4f\n", num, log10(num));
    }
}

int main() {
    double number;

    printf("Enter a positive number: ");
    scanf("%lf", &number);

    calculateLogarithms(number);

    return 0;
}