#include <stdio.h>

int main() {
    char s[100], *p;
    int len = 0;

    fgets(s,100,stdin);
    p = s;
    while(*p!='\0'){ len++; p++; }

    printf("%d", len-1);
    return 0;
}
