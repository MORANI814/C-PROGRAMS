#include <stdio.h>

void multiply(int a[10][10], int b[10][10], int r1, int c1, int c2) {
    int res[10][10];

    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++)
                res[i][j] += a[i][k] * b[k][j];
        }

    printf("Product:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10], r1,c1,r2,c2;

    printf("Enter r1, c1: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter r2, c2: ");
    scanf("%d%d",&r2,&c2);

    if(c1 != r2){
        printf("Multiplication Not Possible\n");
        return 0;
    }

    printf("Enter Matrix A:\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

    multiply(a, b, r1, c1, c2);

    return 0;
}
