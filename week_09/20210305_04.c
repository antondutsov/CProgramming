/*
Задача 4
Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int row;
    int col;
}field;

char table[7][7] =
     {
         {"3324312"},
         {"2423243"},
         {"4232421"},
         {"4412234"},
         {"3233422"},
         {"3242321"},
         {"113342F"},
     };

void printTable();
int getNumericValue(field f);
int isEndOfGame(field current);
int isValidMove(field next);

int main(){
     int stackSize;
     printf("\tОПЦИИ: ");
     
     printf("Начинаещ (50 хода) въведете 50\n");
     
     printf("Напреднал (40 хода) въведете 40\n");
     
     printf("Средно-напреднал (30 хода) въведете 30\n");
     
     printf("Професионалист (20 хода) въведете 20\n");
     
     printf("Световно-ниво (10 хода) въведете 10\n");
     
     printf("Легенда (5 хода) въведете 5\n");
     
     printf("Изберете ниво на трудност: ");
     
     scanf("%d", &stackSize);
     fflush(stdin);
     
     field* movesStack = malloc(sizeof(field)*(stackSize+1));
     
     int index = 0;
     
     field current = {0,0};
     field next = {0,0};
     movesStack[index] = current;
     
     int direction;
     
     while (isEndOfGame(current)){
        printTable();
        printf("Вие се намирате на позиция %d %d стойност(%d)\n", current.row,current.col,getNumericValue(current));
        printf("%d оставащи хода\n", stackSize - index);
        printf("Изберете посока\nдясно(1)\nляво(2)\nгоре(3)\nдолу(4)\nвърнете се с един ход(5)\n");
        scanf("\n%d", &direction);
        switch(direction){
            case 1:
            next.col = current.col+getNumericValue(current);
            next.row = current.row;
                break;

            case 2:
            next.col = current.col-getNumericValue(current);
            next.row = current.row;
                break;

            case 3:
            next.col = current.col;
            next.row = current.row - getNumericValue(current);
                break;

            case 4:
            next.col = current.col;
            next.row = current.row + getNumericValue(current);
                break;

            case 5:
            if (index>0){
                index--;
                current.row = movesStack[index].row;
                current.col = movesStack[index].col;
                continue;
            }
            else{
                printf("Нямате предишни ходове!!! \n");
                continue;
            }
            
            break;
        }
        if (isValidMove(next)){
            ++index;
            movesStack [index] = next;
            current = next;
        }
        else{
            printf("Невалиден ход!!! \n");
            printf("Опитайте друга посока!!! \n");
        }

        if (index == stackSize){
            printf("Играта приключи!!! \n");
        }
        
        
     }
     printf("Вие спечелихте!!!");

return 0;
}

void printTable(){
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            printf("%c",table[i][j]);
        }
        printf("\n");
    }
}

int getNumericValue(field f){
    return table[f.row][f.col] - '0';
}

int isValidMove(field next){
    if (next.row<=7 && next.row>=0){
        if (next.col<=7 && next.col>=0){
            return 1;
        }
    }
    return 0;
}

int isEndOfGame(field current){
    if (table[current.row][current.col] == 'F'){
        return 0;
    }
    return 1;
}
