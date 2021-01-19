#include <stdio.h>
int xor();

int main(){
    int x = 10, y = 10;
    int true = x&&y&x<<1;

    printf("x&&y&x<<1 = %d \n", true);

    xor();

return 0;
}

int xor(x, y){
int true = x&&y^x<<1;

    printf("x&&y^x<<1 = %d \n", true);
}
