/*
Задача 9.
Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки.
*/
#include <stdio.h>

int main(){
    char c = 0;
    putchar(c);
    while((c = getchar()) != EOF){
        if(c >= 65 && c <= 90){
            c += 32;
            putchar(c);
        }
        else{
            putchar(c);
        }
    }

return 0;
}
