/*
Задача 13.
Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'
*/

#include <stdio.h>
#include <string.h>

char *reverseStr(char *str)
{
    int length, i;
    char *begin, *end, temp;
    length = strlen(str);
    begin = str;
    end = str;
    for (i = 0; i < length - 1; i++)
        end++;
    for (i = 0; i < length / 2; i++)
    {
        temp = *end;
        *end = *begin;
        *begin = temp;
        begin++;
        end--;
    }
    return str;
}

int main(void)
{
    char str[100];
    printf("Въведете текст: \n");
    gets(str);
    char *(*reverseString)(char *) = reverseStr;
    printf("Обърнатият текст е: %s\n", reverseString);

return 0;
}
