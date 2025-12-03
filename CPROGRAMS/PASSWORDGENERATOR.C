#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char charset[] = "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                     "0123456789";
    int length, i;
    int charsetSize = sizeof(charset) - 1;

    printf("Enter password length: ");
    scanf("%d", &length);

    srand(time(NULL));  

    printf("Generated Password: ");
    for (i = 0; i < length; i++) {
        int key = rand() % charsetSize;
        printf("%c", charset[key]);
    }
    printf("\n");

}