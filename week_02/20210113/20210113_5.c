/*
5. Използвайте функцията sizeof(),за да проверите размера
на типа на вашата машина. Типове за проверка- integer, float,
short int, unsigned long int
*/

#include <stdio.h>
#include <float.h>

int main(){

    printf("Size of 'int' is: %zu \n", sizeof(int));
    printf("Size of 'float' is: %ld \n", sizeof(float));
    printf("Size of 'short int' is: %zu \n", sizeof(short int));
    printf("Size of 'unsigned long int' is: %ld \n", sizeof(unsigned long int));
    //long double size
    printf("Size of 'long double' is: %ld \n", sizeof(long double));

return 0;
}
