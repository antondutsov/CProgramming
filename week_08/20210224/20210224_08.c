/*Задача 8. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори) */

#include <stdio.h>

#define MY_CONCAT(x,y) x##y

int main(){

    printf("Първа конкатенация: %d",MY_CONCAT(3,8));

    MY_CONCAT(print,f)("\nВтори конкатенатор: %d",MY_CONCAT(1,8));
    
return 0;
} 
