/*
Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.
*/

#include <stdio.h>
#define MAX_SIZE (5)

int main(){
    int alpha[MAX_SIZE];
    int i;

    for(i = 0; i < MAX_SIZE; ++i){
        printf("Въведете стойност за елемент [%d]: ", i+1);
        scanf("%d", &alpha[i]);
    }

    printf("Елементите на Едномерният масив са: \n");

    for(i = 0; i < MAX_SIZE; i++){
        printf("%2d ", alpha[i]);
    }


return 0;
}
