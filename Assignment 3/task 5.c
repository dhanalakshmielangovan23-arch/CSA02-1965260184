#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[]="Madam, I'm Adam";
    int words=0, inside=0, n=0;

    for(int i=0;s[i];i++) {
        if(!isspace((unsigned char)s[i]) && !inside) words++;
        inside=!isspace((unsigned char)s[i]);
        s[i]=(char)toupper((unsigned char)s[i]);
        n++;
    }
    printf("Words: %d\n",words);
    for(int i=n-1;i>=0;i--) putchar(s[i]);
    putchar('\n');
}
