/*
14. Напишете глобална променлива, която увеличаваме с 1 във
функция void test(). Извикайте функцията три пъти test() от main()
принтирайте стойността на глобалната променлива
*/

#include <stdio.h>
int g_Variable = 0; //Дефиниране, деклариране и инициализация на глобална
                   // променлива g_Variable

void test(void){
    g_Variable += 1;
    printf("g_Variable = %d \n", g_Variable);
}

int main(){

    test();
    test();
    test();

return 0;
}
