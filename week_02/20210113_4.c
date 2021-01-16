/*
Упражнение 4:
съберете 10 - 127
*/

#include <stdio.h>

void bin(int n){
    int i; for (i = 1 << 7; i > 0; i = i >> 1 ) (n & i)?
    printf("1"): printf("0"); printf("\n");
}

int main(){
    unsigned int valueOne = 10;
    bin(valueOne);
    printf("%d \n", valueOne);

    signed int valueTwo = -127;
    bin(valueTwo);
    printf("%d \n", valueTwo);

    int addition = valueOne + valueTwo;
    bin(addition);
    printf("%d \n", addition);


return 0;
}
