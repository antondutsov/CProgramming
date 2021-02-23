/*
Задача 7.
Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.
*/

#include <stdio.h>
#include <string.h>

union test{
    int num;
    float fl_num;
    char str[20];
};

int main(void){
    union test var;

    var.num = 2053;
    printf("Цялото числото е равно на: %d \n",var.num);
    
    var.fl_num = 14.2112;
    printf("Реалното число е равно на: %.4f \n",var.fl_num);

    strcpy(var.str, "Успешно!");
    printf("Стрингът е: %s \n",var.str);

return 0;
}
