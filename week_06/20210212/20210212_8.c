/* Задача 8.
Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free()) */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = NULL;
    int n,i;

    printf("\nВъведете необходимият размер: ");

    scanf("%u", &n);
    p = (int*) alloca(n * sizeof(int));

    if(p == NULL) {
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

return 0;
}
