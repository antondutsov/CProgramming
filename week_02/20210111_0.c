#include <stdio.h>

int value(int a, int b);

int main(){
    int sum = value(43, 37);
    printf("%d \n", sum);
}

int value(int a,int b){
    int sum;
    sum = a + b;
    return sum;
}
