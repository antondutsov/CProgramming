/* Задача 9.
Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това. */

#include <stdio.h>
#include <stdlib.h>


int main(void){

    int size,newsize,*p;

    printf("Въведете размер на масива: \n");

    scanf("%d",&size);
    p = (int*)malloc(size * sizeof(int));

    if (p == NULL){
        printf("Паметта не е заделена \n");
        exit(1);
    }

    printf("Адресът на заделената памет: %p \n", p);

    printf("Въведете новият размер: \n");

    scanf("%d",&newsize);
    p = (int*)realloc(p,newsize*sizeof(int));

    printf("Адресът на преразпределената памет: %p \n", p);

return 0;
}
