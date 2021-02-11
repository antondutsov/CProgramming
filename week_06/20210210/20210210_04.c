/*
Задача 4.
Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата
*/

#include <stdio.h>
#include <stdlib.h>

void passwordGenerator();

int main(void){

    passwordGenerator();

return 0;
}

void passwordGenerator(){

   time_t t;
   srand((unsigned) time(&t));
   int made = 1;

    while(made == 1){
        char choice;
        printf("\nЖелаете ли друга парола? ");
        scanf("%c",&choice);
        if(choice == 'n' || choice == 'N'){
            made = 0;
        }
        else{
            for(int i=0;i<6;i++){
                choice = (rand() %  (90 - 65 + 1)) + 65;
                printf("%c", choice);
            }
        }
    }
}
