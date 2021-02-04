/*
Задача 8.Дефинирайте едномерен масив int с 10 елемента =
{100,90,80,70,60,50,40,30,20,10} Дефинирайте пойнтер, който ще сочи към
масива.
Достъпете 3 тия елемент от масива и му задайте стойност 5.
Достъпете 4 тия елемент и му задайте стойност 33.
Достъпете 5 тия елемент и го намалете със 7.
Достъпете 7 мия елемент и го увеличете с 10.
Достъпете 10 тия елемент и го умножете по 3.
Изпишете го по двата възможни начина и закоментирайте единия.
Принтирайте на екрана всички елементи на масива.
*/

#include <stdio.h>

void ModifiedArray(int *PointedArray);

int main(){
    int Array [10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int *PointedArray = Array;

    printf("Въведеният масив е: \n");
    for(int i = 0; i < 10; i++){
        printf("%4d ", Array[i]);
    }

    ModifiedArray(PointedArray);

    printf("\nМодифицираният масив е: \n");
    for(int i = 0; i < 10; i++){
        printf("%4d ", *(PointedArray+i));
        
 
    }

return 0;                                                    
}

void ModifiedArray(int *PointedArray){
   
    *(PointedArray+2) = 5;
    *(PointedArray+3) = 33;
    *(PointedArray+4) -= 7;
    *(PointedArray+6) += 10;
    *(PointedArray+9) *= 3;
}
