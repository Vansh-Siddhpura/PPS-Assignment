//Write a C program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4!...-x^9/9!
#include <stdio.h>

int main() {
    double x, sum = 1.0, term = 1.0;
    int sign = -1;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= 9; i++) {
        term *= x / i;  // Compute x^i / i! iteratively
        sum += sign * term;  // Alternating sign
        sign = -sign;  // Flip sign for next term
    }

    printf("Sum of the series: %.6f\n", sum);
    
    return 0;
}

