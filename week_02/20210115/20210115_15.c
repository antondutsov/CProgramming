/*
15. Използвайте статична локална променлива, за да постигнете
същото поведение, описано в задача 14
*/

#include <stdio.h>
static int Variable; //Дефиниране, деклариране и инициализация на статична
               // променлива g_Variable

void test(void){
    static int Variable;
    Variable++;
    printf("Variable = %d \n", Variable);
}

int main(){

    test();
    test();
    test();

return 0;
}
