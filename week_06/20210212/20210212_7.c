/* Задача 7.
Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = NULL;
    int br = 0;
    int sum = 0;

    printf("Въведете броя на елементите: ");

    scanf("%d", &br);

    arr=(int*)calloc(br, sizeof(int));

    for(int i=0; i< br; i++){
        printf("Въведете елементите: %d ", i+1);
        scanf("%d", (arr+1));
        sum += *(arr+1);
    }

    printf("Сборът от елемнентите:  %d ", sum);

    free(arr);

return 0;
}
