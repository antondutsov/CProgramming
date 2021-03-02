/*Задача 7. Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.*/
#include <stdio.h>
#include <string.h>

typedef struct names
{
    char s[10];
    int a;
} key_t;

typedef key_t WORDS[32];

WORDS keywords = {
    {"auto"},
    {"break"},
    {"case"},
    {"char"},
    {"const"},
    {"continue"},
    {"default"},
    {"do"},
    {"double"},
    {"else"},
    {"enum"},
    {"extern"},
    {"float"},
    {"for"},
    {"goto"},
    {"if"},
    {"int"},
    {"long"},
    {"register"},
    {"return"},
    {"short"},
    {"signed"},
    {"sizeof"},
    {"static"},
    {"struct"},
    {"switch"},
    {"typedef"},
    {"union"},
    {"unsigned"},
    {"void"},
    {"volatile"},
    {"while"},
};

int main()
{
    for (int i = 0; i < sizeof(WORDS) / sizeof(key_t); i++)
    {
        printf("[%2d] = \"%s\"\n", keywords[i].a, keywords[i].s);
    }

    return 0;
}