/*Задача 2 Разширяване на заделена памет с realloc.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *piValue = NULL;
    unsigned uSize = 0;

    printf("\nВъведете размер: ");
    scanf("%u", &uSize);

    piValue = (int *)malloc(uSize * sizeof(int));

    if (NULL == piValue){
        printf("Грешка при заделяне на памет! \n");
        exit(1);
    }

    printf("Адресът на заделената памет: %p\n", piValue);
    printf("\nВъведете нов размер: ");

    scanf("%u", &uSize);
    piValue = realloc(piValue, uSize * sizeof(int));

    if (NULL == piValue){
        printf("Грешка при преразпределяне на памет! \n");
        exit(2);
    }

    printf("Адресът на преразпределената памет: %p\n", piValue);

    free(piValue);

return 0;
}
