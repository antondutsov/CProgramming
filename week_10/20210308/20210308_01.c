/*
Задача 1 Напишете програма, която чете стринг от стандартния вход и 
го извежда на стандартния изход с функцията gets(szBuf);
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 31

int main(void)
{
    char str[BUFSIZE];
    printf("Въведете стринг: \n");
    gets(str);
    printf("Вие въведохте: \n");
    puts(str);

return 0;
}