

#include <stdio.h>

void our_strcat(char *s, char *t);

int main()
{
    char str1[] = "mall +";
    char str2[] = " ocation";
    our_strcat(str1, str2);
    printf("\n%s \n", str1);

return 0;
}

void our_strcat(char *s, char *t)
{
    while(*s != '\0'){
        s++;
    }
    while((*s=*t) != '\0'){
        s++;
        t++;
    }
}
