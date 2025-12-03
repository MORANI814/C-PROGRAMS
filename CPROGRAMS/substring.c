#include <stdio.h>
#include <string.h>

int main() {
    char mainstr[100], substr[50], result[150];
    int pos, i, j = 0;

    fgets(mainstr,100,stdin);
    fgets(substr,50,stdin);
    scanf("%d",&pos);

    for(i=0;i<pos;i++)
        result[j++] = mainstr[i];

    for(i=0;substr[i]!='\0';i++)
        result[j++] = substr[i];

    for(i=pos;mainstr[i]!='\0';i++)
        result[j++] = mainstr[i];

    result[j]='\0';
    puts(result);
    return 0;
}
