/*
Задача 3. Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5).
*/

#include <stdio.h>
#define MAX_SIZE_ROWS (2)
#define MAX_SIZE_COLS (2)
#define MAX_SIZE_DEPT (2)

int main(){
    int alpha[MAX_SIZE_ROWS][MAX_SIZE_COLS][MAX_SIZE_DEPT];
    int i, j, k;

    for(i=0; i < MAX_SIZE_ROWS; i++){
        for(j=0; j< MAX_SIZE_COLS; j++){
            for(k = 0; k < MAX_SIZE_DEPT; k++){

                printf("Въведете стойност за елемент [%d][%d][%d]: ", i, j, k);
                scanf("%d", &alpha[i][j][k]);
            }
        }
    }
    printf("Елементите на Тримерният масив са: \n");
    for(i=0; i< MAX_SIZE_ROWS; i++){
        for(j=0; j< MAX_SIZE_COLS; j++){
            for(k = 0; k < MAX_SIZE_DEPT; k++){

                printf("%d ", alpha[i][j][k]);
            }
        }
    }

return 0;
}
