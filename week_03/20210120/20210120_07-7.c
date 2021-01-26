/*
Задача 7.7.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue.
*/


#include <stdio.h>
int main(){
    char c;
    int i,br,total = 0;
    br=0;// Брой на цифрите

    while((c=getchar()) != EOF){
        total++;
        if(c<'0' || c>'9')
            continue;
            br++;
    }

    printf("simvols total is %d \n", total);
    printf("Number of digits = %d\n", br);

return 0;
}
