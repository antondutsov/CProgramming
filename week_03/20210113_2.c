/*
2. Да направим функция, която ще принтира числата от
десетичен в бинарен вид;
2. Да съберем пак две числа от тип char 255 + 10, да използваме функцията
за представяне на числата в двоичен вид:
*/

#include <stdio.h>

void bin(unsigned n){
    unsigned i; for (i = 1 << 7; i > 0; i = i >> 1 ) (n & i)?
    printf("1"): printf("0"); printf("\n");
}

#include <stdio.h>

int main(){
    char valueOne = 255;
    char valueTwo = 10;

    char addition = valueOne + valueTwo;

    printf("%d \n", addition);


return 0;
}
