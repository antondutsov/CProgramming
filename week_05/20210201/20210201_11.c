/*
Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]
*/
#include <stdio.h>


void squeeze(char *str, char c);

int main(void)
{

    printf("This is long string without 'c'. \n");
    char str[] = "This is long string without 'c'.";
    squeeze(str, 'c');

    //    printf("This is long string without 'i'. \n");
    //    char str[] = "This is long string without 'i'.";
    //    squeeze(str, 'i');

    printf("%s", str);
    return 0;
}

void squeeze(char *str, char c)
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != c)
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
