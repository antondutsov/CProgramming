/*
Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки.
*/

#include <stdio.h>

void toLower(char s[]);

int main(){
    char str[] = "A STRING OF CAPITAL LETTERS!";
    toLower(str);
    printf("%s", str);

return 0;
}

void toLower(char *str)
{
    int i;
    for (i = 0; str[i] != '0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    return;
}
