/*
Задача 7.
Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.
*/

#include <stdio.h>

int strend(char *s, char *t);

int main(void){
    char str1[] = {'M','a','l','l','o','\0'};
    char str2[] = {'A','l','l','o','c','\0'};
    printf("%d", strend(str1, str2));

return 0;
}

int strend(char *s, char *t)
{
    char *ps = s;
    char *pt = t;

    while (*ps) {
        t = pt;
        for (s = ps; *s == *t; s++, t++) {  //
            if (*s == '\0' && *t == '\0') {
                return 1;
            }
        }
        ps++;
    }

return 0;
}
