/* Задача 10*.
Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където
използваме char масив. Тук може да използвате
друг тип. */

#include <stdio.h>
#include <stdlib.h>
/*Реализация на масив с променлива размерност */

int main (void){
    int *piValue=NULL,i;
    unsigned uSize=0;

    printf ("Въведете размер: ");
    scanf ("%u",&uSize);

    piValue=(int*)malloc(uSize*sizeof(int));

    if(NULL==piValue){
        printf("Грешка при заделяне на памет! \n");
        exit(1);
    }

    printf("Адресът на заделената памет: %p \n\n",piValue);

    for (i=0;i<uSize;i++){
        printf ("Enter element %d: ",i);
        scanf ("%d",piValue+i);
        printf("Адресът на %d: %p\n",i, (uSize + i));
    }

    printf ("\n\nВъведете нов размер: ");

    scanf("%u",&uSize);
    piValue=realloc(piValue,uSize*sizeof(int));

    if (NULL==piValue){
        printf ("Грешка при преразпределяне на памет! \n");
        exit(2);
    }

    printf("Адресът на преразпределената памет: %p\n\n",piValue);

    for (i=0;i<uSize;i++){
        printf ("Enter element %d: ",i);
        scanf ("%d",piValue+i);
        printf("Адресът на %d: %p\n",i, (uSize + i));
    }

    free (piValue);

return 0;
}
