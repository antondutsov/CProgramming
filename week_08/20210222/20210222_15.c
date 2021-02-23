/*
Задача 15.
Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат Пример:
prog1 > structs20.cvs
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 20

enum grade{
    num,
};

struct Student{
    int fn;
    char name[10];
    double average;
    enum grade number;
};

int main(){
    struct Student arr[20];

    for(int i=0; i<20; i++){
        arr[i].fn=i+1;
        arr[i].average=(double)i+1.5;
        strcpy(arr[i].number,"Оценка");
       
        printf("%d,%s,%lf,%d\n",arr[i].fn,arr[i].name,arr[i].average,arr[i].number);
    }

return 0;
}
