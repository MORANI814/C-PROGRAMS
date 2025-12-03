#include <stdio.h>

int main() {
    int choice;
    float c, f, k;

    while(1) {
        printf("\n1.Celsius to Fahrenheit");
        printf("\n2.Fahrenheit to Celsius");
        printf("\n3.Celsius to Kelvin");
        printf("\n4.Kelvin to Celsius");
        printf("\n5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            scanf("%f", &c);
            f = (c * 9/5) + 32;
            printf("%.2f", f);
        }

        else if(choice == 2) {
            scanf("%f", &f);
            c = (f - 32) * 5/9;
            printf("%.2f", c);
        }

        else if(choice == 3) {
            scanf("%f", &c);
            k = c + 273.15;
            printf("%.2f", k);
        }

        else if(choice == 4) {
            scanf("%f", &k);
            c = k - 273.15;
            printf("%.2f", c);
        }

        else if(choice == 5) {
            return 0;
        }

        else {
            printf("Invalid");
        }
    }
}
