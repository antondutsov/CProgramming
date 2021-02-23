/*
Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.
*/
 
#include <stdio.h>
#include <string.h>

struct example{
    int var1;
    char var2[128];
    float var3;
}__attribute__((packed));

int main (void){
    struct example a;
    a.var1=2;
    strcpy(a.var2,"chocolate");
    a.var3= 2.49;
    printf("Количество: %d\nВид: %s\nЕд. Цена: %.2f \n", a.var1, a.var2, a.var3);

return 0;
}
