#include <stdio.h>

int vdigniBitNa (int value, int index);

int main(){
    int value= 73;
    int index = 1;
    int newValue = vdigniBitNa(value, index);
    printf("%d", newValue);

    return 0;
}

int vdigniBitNa(int value, int index){
    int mask = 1;
    int maskShift = mask << index;
    int newValue = value | maskShift;

    return newValue;
}
