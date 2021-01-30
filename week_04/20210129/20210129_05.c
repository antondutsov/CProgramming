/*
Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.
*/

#include <stdio.h>

int evenOrOdd();

int main(){

   int rez = evenOrOdd();
   printf("%d \n", rez);

return 0;
}

int evenOrOdd(int num){
    printf("Enter integer: ");

    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);
    return 0;
}
