/*
Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл.
*/

#include <stdio.h>
#include "utils.h"

int main(){

    func1();
  /*  int rez = func1();
    printf("Крайният резултат е: %d", rez);
  */

return 0;
}


/* Събиране */
int func1(int l){
    int i;
    l = func2() + 5;
    return i = l;
}

/*Делние*/
int func2(int m){
    int i;
    m = func3() / 13;
    return i = m;
}

/*Умнжение*/
int func3(){
    int n, i;
    scanf("%d", &n);
    return i = n * 12;

}
