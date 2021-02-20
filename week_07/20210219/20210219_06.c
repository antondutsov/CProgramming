/*
Задача 6. Направете по подобен начин триъгълник:
*/

#include <stdio.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point a;
    struct point b;
};

int main(void){
    int matrix[15][15];
    int i, j;

    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            matrix[i][j] = '|';
        }
    }

    for (int i = 0; i < 15; i++){
        printf("\n");
        for (int j = 0; j < 15; j++){
            printf(" %c ", matrix[i][j]);
        }
    }

    struct point a = {3, 4};
    struct point b = {7, 8};
    struct point c = {b.x, a.y};
    
    matrix[a.x][a.y] = '@';
    matrix[b.x][b.y] = '@';
    matrix[c.x][c.y] = '@';
    
    for (i = c.x; i >= a.x; i--){
        for (j = i+1; j >= a.y; j--){
            matrix[i][j] = '@';
        }
    }
    
     for (int i = 0; i < 15; i++){
        printf("\n");
        for (int j = 0; j < 15; j++){
            printf(" %c ", matrix[i][j]);
        }
    }


    return 0;
}
