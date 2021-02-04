/*
Задача 4.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива.
*/

#include <stdio.h>

int BinarySearch (int array[], int n, int search);

int main(){

    int n = 0;
    int array[100]={0};
    int search = 0;

    printf("Колко елемента ще съдържа масивът?: \n");
    scanf("%d", &n);

    printf("Въведете %d-те елементи на масива: \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Кой елемент на масива ще търсите?:  \n");
    scanf("%d", &search);

    BinarySearch(array, n, search);


return 0;
}

int BinarySearch (int array[], int n, int search){
    int first = 0;
    int last = 0;
    int middle = 0;

    last = n-1;
    middle = (first+last)/2;

    while (first <= last) {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search) {
            printf("Елемент '%d' намерен на позиция: %d. \n", search, middle+1);
        break;
    }
        else
            last = middle - 1;

    middle = (first + last)/2;
    }

    if (first > last){
      printf("Елемент %d не е наличен в масива.\n", search);
      return -1;
    }

return 0;
}
