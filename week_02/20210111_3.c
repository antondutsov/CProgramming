#include <stdio.h>

int iz4istiBitna(int value, int index);

int main(){

    int value = 5;
    int index = 3;
    printf("%d \n", iz4istiBitna(value, index));

    return 0;
}

int iz4istiBitna(int value, int index) {

    int mask = 1 << index;
    mask = ~mask;
    value = value & index;

    return value;
}
