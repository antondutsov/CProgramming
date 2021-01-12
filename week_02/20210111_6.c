#include <stdio.h>

int main(void){

    int number = 23;
    int index = 2;

    int mask = 1;
    int maskShift = mask << index;
    int newValue = number ^ maskShift;

    printf("%d", newValue);

    return 0;
}
