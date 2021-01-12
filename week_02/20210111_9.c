#include <stdio.h>

int shiftBit(int value){
    int index = 247;

    index = ~index;

    value = value & index;

    printf("%d", value);
}

int main(){

    int a = 15;

    shiftBit(a);

  return 0;
}
