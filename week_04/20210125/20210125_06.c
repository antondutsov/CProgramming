/*
Задача 6.
Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue.
*/

#include <stdio.h>

int main(){
    char c = 0;
    int cNu, cWo;

    while((c = getchar()) != EOF){
        if((c >= '\65' && c <= '\90') || (c >= '\97' && c <= '\122')){
            ++cWo;
        }
        if (c < '0' || c > '9')continue;{
            ++cNu;
        }
    }

    printf("the count of words is: %d \n", cWo);
    printf("the count of digits is: %d \n", cNu);

return 0;
}
