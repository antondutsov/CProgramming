/*
Задача 8.
Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.
*/

#include <stdio.h>

int atoiPoint(char *s);
double atofPoint( char *s);
void reversePoint(char *s);

int main(void){

    char array[100] = "Malloc";
    reversePoint(array);

return 0;
}


int atoiPoint(char *s)
{
    int res = 0;
    int sign = 1;
    if (*s == '-'){
        sign = -1;
        s++;
    }
    if (*s == '+') s++;

    while (*s>='0' && *s<='9'){
        res = res * 10 + (*s - '0');
        s++;
    }

return res*sign;
}

double atofPoint( char *s){

    double n=0, p;

    while (*s>='0' && *s<='9'){
        n = n * 10 + (*s - '0');
        s++;
    }

    if(*s=='.')s++;

    while (*s>='0' && *s<='9'){
        n = n * 10.0f + (*s - '0');
        p*=10.0f;
        s++;
    }

return n/p;
}

void reversePoint(char *s){
    int len = strlen(s);
    while(*s){
        s++;
    }
    *s--;
    while(len){
         printf("%c",*s--);
         len--;
    }

}
