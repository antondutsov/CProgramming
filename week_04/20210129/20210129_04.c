/*
Задача 4. Напишете функция, която връща резултат a*2 + b*c.
*/

#include <stdio.h>

int addittion();

int main(){
   printf("Програмата ще изпълни следното пресмятане: \n 'a * 2 + b * c' \n");
   int rez = addittion();
   printf("%d \n", rez);

return 0;
}

int addittion(int a, int b, int c){
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("\nEnter second integer: ");
    scanf("%d", &b);

    printf("\nEnter third integer: ");
    scanf("%d", &c);

    return a * 2 + b * c;
}
