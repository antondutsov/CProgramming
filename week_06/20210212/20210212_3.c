/* Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата */

#include <stdio.h>
#include <stdlib.h>
int main(){

    int *pValue = NULL;
    unsigned uSize = 0;

    printf("Enter size: ");

    scanf("%u", &uSize);
    pValue=(int*)malloc(uSize *sizeof(int));

    if(NULL==pValue){
        printf("Грешка \n");
        exit(1);
    }

    printf("Адресът на заделената памет: %p\n", pValue);

    printf("Въведете новият размер ");

    scanf("%u", &uSize);
    pValue=realloc(pValue, uSize* sizeof(int));

    printf("Адресът на преразпределената памет: %p\n", pValue);

    free(pValue);

return 0;
}
