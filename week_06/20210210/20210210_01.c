/*
Задача 1. Напишете програма, която сумира всички елементи на масив
намиращи се на четна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането.
*/

#include <stdio.h>

int sumEven(int *pointerToArray, int numberOffElements);

int main(){
    int array[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int *ip = &array[1];
    int i, sum = 0;

    sum += *(ip + 0);
    printf("%d \n", *(ip + 0));
    sum += *(ip + 2);
    printf("%d \n", *(ip + 2));
    sum += *(ip + 2);
     printf("%d \n", *(ip + 2));
    sum += *(ip + 2);
     printf("%d \n", *(ip + 2));
    sum += *(ip + 2);
     printf("%d \n", *(ip + 2));
    sum += *(ip + 2);
     printf("%d \n", *(ip + 2));

     printf("Стойността на елементите е: %d \n", sumEven(array, 10));

return 0;
}

int sumEven(int *pointerToArray, int numberOfElements){
    int i, sum = 0;

    for(i = 1; i < numberOfElements; i += 2){
        sum += *(pointerToArray + i);
        printf("%d \n", sum);
    }

return sum;

}
