#include <stdio.h>
int main() {
    int a, b, c;
    float avg;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    avg = (a + b + c) / 3.0;
    printf("Sum = %d\n", a + b + c);
    printf("Average = %.2f\n", avg);
    return 0;
}
