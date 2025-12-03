#include <stdio.h>

int main() {
    int n, a[10][10], flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }

    if(flag) printf("Matrix is Symmetric\n");
    else     printf("Matrix is Not Symmetric\n");

    return 0;
}
