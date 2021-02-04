/*
Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.
*/


#include <stdio.h>

long double  facto(int uValue);

int main(){
    int n;
    n = 30; /* 30! = 265252859812191058636308480000000 */

    printf("%.0Lf \n", facto(n));

return 0;
}

long double  facto(int uValue) {
    if (uValue < 2) {
        return 1;

    } else {
        return uValue * facto(uValue - 1);
    }
}

