/*
Задача 4
Напишете програма, която копира входа си на изхода, като
замества всеки низ от една или повече шпации, с една
единствена шпация
*/


#include <stdio.h>
int main(void){
    char c;
    int space = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            if (space >= 1 && c == ' '){
                continue;
            }
            space = 1;
        }
        else{
            space = 0;
        }
        putchar(c);
    }
    return 0;
}
