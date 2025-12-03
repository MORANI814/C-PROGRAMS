#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p;
    p = a;

    for(int i=0; i<5; i++)
        printf("%d ", *(p+i));

    return 0;
}
