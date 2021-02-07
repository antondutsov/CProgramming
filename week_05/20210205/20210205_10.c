/*
Задача 10.
Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.
*/

#include <stdio.h>

char* myStrncat(char* s, char* t, int n);

int main(void){
    char str1[] = {'M','a','l','l','o','\0'};
    char str2[] = {'A','l','l','o','c','\0'};

    printf("%s", myStrncat(str1, str2, 3));

return 0;
}

char* myStrncat(char *s,char *t, int n){
    char * p = s;
    while(*s){
            s++;
    }
    while((*s=*t)!='\0' && n--)
        {
           s++;
           t++;
        }

    *s = '\0';

return p;
}
