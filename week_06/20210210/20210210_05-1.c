/*
Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
*/

#include <stdio.h>

int alphaAdd();

int main()
{
    int arr[5] = {11,22,33,44,55};
    printf("Сборът е: %d",alphaAdd(arr, 5));

return 0;
}

int alphaAdd(int *a, int n){
    int sum = 0;
    while (n != 0){
        sum += *a;
        a++;
        n--;
    }

return sum;
}
