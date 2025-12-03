#include <stdio.h>

struct Student {
    int roll;
    char name[20];
};

int main() {
    struct Student s = {101, "Ram"};
    struct Student *p;
    p = &s;

    printf("%d\n", p->roll);
    printf("%s\n", p->name);

    return 0;
}
