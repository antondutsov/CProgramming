/* Задача 4.
Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = NULL;
    int n,i;

    printf("\nВъведете колко броят на елементите, които ще въведете: ");

    scanf("%u", &n);
    p = (int*) malloc(n * sizeof(int));

    if(p == NULL){
        printf("Недостатъчно памет! \n");
        exit(1);
    }

    for(i=0;i<n;i++){
        printf("Въведете [%d] елемент: ", i);
        scanf("%d", p+i);
    }

    printf("Въведените елементи: ");

    for(i=0;i<n;i++){
        printf("%d, ", *(p+i));
    }

    free(p);

return 0;
}
