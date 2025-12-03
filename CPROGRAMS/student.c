#include <stdio.h>

struct student {
    char name[50];
    int m1, m2, m3;
};

int main() {
    struct student s;
    int total;
    float percent;

    scanf("%s", s.name);
    scanf("%d%d%d", &s.m1, &s.m2, &s.m3);

    total = s.m1 + s.m2 + s.m3;
    percent = total / 3.0;

    printf("%d %.2f", total, percent);
    return 0;
}
