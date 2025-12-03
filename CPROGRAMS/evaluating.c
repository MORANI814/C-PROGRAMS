#include <stdio.h>
int main() {
    float a, x, b, result;
    printf("Enter a, x, b: ");
    scanf("%f %f %f", &a, &x, &b);
    if (a*x - b == 0)
        printf("Denominator is zero!");
    else {
        result = (a*x) / (a*x - b);
        printf("Result = %f\n", result);
    }
    return 0;
}
