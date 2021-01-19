#include <stdio.h>

int obarniBitNa(int value, int index);

int main(void){
    int value = 45;
    int index = 3;
    int newValue = obarniBitNa(value,index);
    printf("%d \n",newValue);

}

int obarniBitNa(int digit, int index){
    int mask = 1;
    int maskShift = mask << index;
    int newValue = digit ^ maskShift;
    return newValue;
}
