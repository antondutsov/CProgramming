/*
Задача 7
Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа.
*/

#include <stdio.h>

int main(void){
    int i = 0, c;
    int buff[200];

    while((c = getchar()) != EOF){
        buff[i] = c;
        i++;
        if(c == '\n' && i > 10){
            printf("%s \n", buff);
            i = 0;
        }
        else if(c == '\n'){
            i = 0;
        }
    }

return 0;
}
