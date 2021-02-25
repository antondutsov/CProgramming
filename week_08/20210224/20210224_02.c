/*
 Напишете макрос swap(t, x, y), койти променя местата на двата аргумента от тип t.
*/

#include <stdio.h>
#define swap(t, x, y) {t i=x; x=y; y=i;}

int main(void){
    int x = 7;
    int y = 8;
    char a = 'a';
    char b = 'b';

    swap(int,x,y);
    printf("Стойността на 'x' e: %d, и стойността на 'y' e: %d \n", x, y);

    swap(char,a,b);
    printf("Стойността на 'a' e: '%c', и стойността на 'b' e: '%c' \n", a, b);


return 0;
}
