#include <stdio.h>

int main() {
    char c;
    int lines=0, words=0, chars=0, inWord=0;

    while((c=getchar())!=EOF){
        chars++;
        if(c=='\n') lines++;
        if(c==' '||c=='\n'||c=='\t') inWord=0;
        else if(!inWord){ inWord=1; words++; }
    }

    printf("Lines=%d Words=%d Chars=%d", lines, words, chars);
    return 0;
}
