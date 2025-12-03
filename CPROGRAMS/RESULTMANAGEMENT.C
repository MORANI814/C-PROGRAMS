#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percent;
    char grade;
};

char calcGrade(float p) {
    if(p >= 90) return 'A';
    if(p >= 75) return 'B';
    if(p >= 60) return 'C';
    if(p >= 40) return 'D';
    return 'F';
}

int main() {
    struct Student s[100];
    int n = 0, choice, roll, i;

    while(1) {
        printf("\n1.Add Student\n2.Display All\n3.Search\n4.Exit\nEnter choice: ");
        scanf("%d",&choice);

        if(choice == 1) {
            printf("Roll: ");
            scanf("%d",&s[n].roll);
            printf("Name: ");
            scanf("%s",s[n].name);
            printf("Enter 5 subject marks: ");
            scanf("%d%d%d%d%d",&s[n].m1,&s[n].m2,&s[n].m3,&s[n].m4,&s[n].m5);

            s[n].total = s[n].m1 + s[n].m2 + s[n].m3 + s[n].m4 + s[n].m5;
            s[n].percent = s[n].total / 5.0;
            s[n].grade = calcGrade(s[n].percent);

            n++;
        }

        else if(choice == 2) {
            for(i=0;i<n;i++) {
                printf("\nRoll: %d\nName: %s\nTotal: %d\nPercent: %.2f\nGrade: %c\n",
                s[i].roll, s[i].name, s[i].total, s[i].percent, s[i].grade);
            }
        }

        else if(choice == 3) {
            printf("Enter Roll Number: ");
            scanf("%d",&roll);
            for(i=0;i<n;i++) {
                if(s[i].roll == roll) {
                    printf("\nRoll: %d\nName: %s\nTotal: %d\nPercent: %.2f\nGrade: %c\n",
                    s[i].roll, s[i].name, s[i].total, s[i].percent, s[i].grade);
                    break;
                }
            }
            if(i == n) printf("Student not found!\n");
        }

        else if(choice == 4) {
            return 0;
        }

        else {
            printf("Invalid choice\n");
        }
    }
}
