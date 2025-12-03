#include <stdio.h>

int fact(int n){
    int f = 1;
    for(int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int n, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while(temp) {
        sum += fact(temp % 10);
        temp /= 10;
    }
    if(sum == n) printf("Strong Number");
    else printf("Not Strong");
    return 0;
}
