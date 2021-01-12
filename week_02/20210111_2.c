#include <stdio.h>

int getBit(int value, int index);

int main() {

    int value = 17;
    int index = 9;

    printf("%d \n", getBit(value,index));

    return 0;
}

int getBit(int value, int index) {

    int h = 1;
    value = value >> index;
    value = value & h;

    return value;
}
