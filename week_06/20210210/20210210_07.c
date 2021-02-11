/*
Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.
*/

#include <stdio.h>

void quicksort(int *target, int left, int right);

int main(void){
    int i;
    int size = 10;
    int array[10] = {20, 61, 30, 80, 50, 100, 14, 21, 39, 67};

    quicksort(array, 0, size-1);
    printf("Сортираният масив: \n");
    for(i=0; i < size; i++){
        printf("%d ", array[i]);
    }

    return 0;
}

void quicksort(int *target, int left, int right) {
    if(left >= right){
        return;
    }

    int i = left;
    int j = right;
    int temporary;
    int pivot = target[i];

    for(;;){
        while(target[i] < pivot){
            i++;
        }

        while(pivot < target[j]){
            j--;
        }

        if(i >= j){
            break;
        }

        temporary = target[i];
        target[i] = target[j];
        target[j] = temporary;
        i++;
        j--;
    }

    quicksort(target, left, i - 1);
    quicksort(target, j + 1, right);
}
