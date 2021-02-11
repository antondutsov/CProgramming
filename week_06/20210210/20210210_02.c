/*
Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.
*/

#include <stdio.h>

int main(){
    char s;
    s = getchar();
    char str1[20];

    int i = 0;
    int length = 0;


    while(s != '\n'){
        str1[i] = s;
        length += 1;
        i++;
        s = getchar();
    }

    char *pointer = &str1[length];

    while(length > 0){
        pointer -=1;
        printf("%c \n", (*pointer));
        length -= 1;

    }


return 0;
}
