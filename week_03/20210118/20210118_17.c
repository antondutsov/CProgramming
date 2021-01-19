#include <stdio.h>

int main(){
    int A = 1;

    A = A ^= A << 13;
    printf("%d \n", A);

    A = A ^= A >> 17;
    printf("%d \n", A);

    A = A ^= A << 5;
    printf("%d \n", A);

    long int B = 4563456;

    B = B ^= B << 13;
    printf("%ld \n", B);

    B = B ^= B >> 17;
    printf("%ld \n", B);

    B = B ^= B << 5;
    printf("%ld \n", B);


return 0;
}
