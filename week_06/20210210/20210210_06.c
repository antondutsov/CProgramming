/*
Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.
*/

#include <stdio.h>

int linSearch(int array[], int length, int number);

int main(void){
    int array[] = {11, 22, 33, 44, 55, 66};
    int length = 10;
    int number = 44;

    int position = linSearch(array, length, number);

    if (position >= 0){
        printf("\nMatch at position: %d\n", position);
    }
    else{
        printf("\nNo such position, zero matches!\n");
    }

return 0;
}

int linSearch(int array[], int length, int number){
    int *pointer = array;
    int i = 0;
    for (pointer; *pointer; pointer++){
        if(*pointer == number){
            return i;
        }
        i++;
    }

return -1;
}
