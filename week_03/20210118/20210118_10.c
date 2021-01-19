# include <stdio.h>

int main() {

int nResult = 13; /* опитайте с други стойности */
int nX = 4;

printf("Result = %d\n", nResult);

nResult += nX;
printf("Result += %d --> %d \n", nX, nResult);

nResult = 20;
nResult -= nX;
printf("Result -= %d --> %d\n", nX, nResult);

nResult = 30;
nResult <<= nX;
printf("Result <<= %d --> %d\n", nX, nResult);

nResult = 40;
nResult >>= nX;
printf("Result >>= %d --> %d\n", nX, nResult);

nResult = 50;
nResult *= nX;
printf("Result *= %d --> %d\n", nX, nResult);

nResult = 60;
nResult /= nX;
printf("Result /= %d --> %d\n", nX, nResult);

/* Невалиден оператор %=
nResult = 70;
nResult %= nX;
printf("Result %= %d --> %d\n", nX, nResult);
*/

 /* използвайте и други оператори за присвояване */
}
