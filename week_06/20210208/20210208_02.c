/*
Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.
*/

#include <stdio.h>
#define MAX_SIZE_ROWS (5)
#define MAX_SIZE_COLS (5)

int main(){
    int alpha[MAX_SIZE_ROWS][MAX_SIZE_COLS];
    int i, j;

    for(i=0; i < MAX_SIZE_ROWS; i++){
        for(j=0; j< MAX_SIZE_COLS; j++){
            printf("Въведете стойност за елемент [%d][%d]: ", i, j);
            scanf("%d", &alpha[i][j]);
        }
    }
    printf("Елементите на Двумерният масив са: \n");
    for(i=0; i< MAX_SIZE_ROWS; i++){
        for(j=0; j< MAX_SIZE_COLS; j++){
            printf("%d ", alpha[i][j]);
        }
    }

return 0;
}
