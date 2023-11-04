/* 
Write a C function to evaluate the series.
sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!) + .... 
up to 10 terms. 
*/
#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * factorial(n - 1);
    }
}

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }
    double result = base;
    for (int i = 1; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

double sinSeries(double x) {
    double sinVal = 0.0;
    int terms = 10;
    int powerIndex = 1;
    int factIndex = 1;
    int sign = 1;

    for (int i = 0; i < terms; ++i) {
        sinVal += (sign * power(x, powerIndex)) / factorial(factIndex);
        sign *= -1;
        powerIndex += 2;
        factIndex += 2;
    }
    return sinVal;
}

int main() {
    double x;
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    double result = sinSeries(x);
    printf("sin(%.2f) = %.6f\n", x, result);

    return 0;
}
