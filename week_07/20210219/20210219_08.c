/*
Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.
*/


#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point a;
    struct point b;
};


int main(void){
    struct point a = {0, 0};
    struct point b = {15, 15};

    struct rect screen = {a, b};

    char screenMatrix[b.x][b.y];

    for (int i = screen.a.x; i < screen.b.x; i++){
        for (int j = screen.a.y; j < screen.b.y; j++){
            screenMatrix[i][j] = '-';
            printf(" %c ", screenMatrix[i][j]);
        }
        printf("\n");
    }

return 0;
}
