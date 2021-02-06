/*
Задача 3
Какво е грешното на този код?
void my_strcpy(char *t, char *s){
for(; *t; t++, s++)
*s = *t;
}
 */

#include <stdio.h>
void strcpy1(char *s, char *t);

int main()
{
    char first[] = "Hello World!";
    char second[10];
    strcpy1(second, first);
    printf("%s", second);
}

void strcpy1(char *s, char *t)
{
    while (*s++ = *t++)
        ;
}
