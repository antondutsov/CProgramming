/*
Задача 3. Напишете функция, която връща резултат (а+в)*4.
*/

#include <stdio.h>

int addittion();

int main(){
   printf("Програмата ще изпълни следното пресмятане: \n '(a + b) * 4' \n");
   int rez = addittion();
   printf("%d \n", rez);

return 0;
}

int addittion(int a, int b){
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("\nEnter second integer: ");
    scanf("%d", &b);

    return (a + b) * 4;
}
