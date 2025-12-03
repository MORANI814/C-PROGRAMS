#include <stdio.h>
int main() {
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("1.Add 2.Sub 3.Mul 4.Div\nEnter choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1: printf("Sum = %d", a+b); break;
        case 2: printf("Difference = %d", a-b); break;
        case 3: printf("Product = %d", a*b); break;
        case 4: 
            if(b != 0) printf("Quotient = %d", a/b);
            else printf("Division by zero");
            break;
        default: printf("Invalid Choice");
    }
    return 0;
}
