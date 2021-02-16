/* 
3.Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char. 
*/

#include <stdio.h>

int main(void){
    int a = 80;
    float b = 80.08;
    char c = 'D';

    int *ip = &a;
    float *fp = &b;
    char *cp = &c;

    printf("int a:\t\tvalue = %i\t\taddress = %p \n", a, &a);

    printf("float b:\tvalue = %.2f\taddress = %p \n", b, &b);

    printf("char c:\t\tvalue = %c\t\taddress = %p \n", c, &c);

    printf("\nint *ip:\tvalue = %i\t\taddress = %p \n", *ip, ip);

    printf("float *fp:\tvalue = %f\taddress = %p \n", *fp, fp);

    printf("char *cp:\tvalue = %c\t\taddress = %p \n", *cp, c);

return 0;
}
