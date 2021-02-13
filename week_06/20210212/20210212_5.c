/* Задача 5 Разширяване на заделена памет с realloc */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int *array = NULL;
    array = malloc(5*sizeof(*array));

    if (array == NULL)
    {
        printf("Грешка при заделяне на памет \n");
        exit(1);
    }

    array[0] = array[1] = array[2] = array[3] = array[4] = 0;
    array = realloc(array, 10*sizeof(*array));

    if (array == NULL)
    {
        printf("Грешка при заделяне на памет \n");
        exit(1);
    }

    printf("Адресът на преразпределената памет: %p \n",array);

    free(array);
    array = NULL;

return 0;
}
