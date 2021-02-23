/*
Задача 11.
Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.
*/


#include <stdio.h>

union threeElements{
    int firstInt;
    int secondInt;
    char text[31];
};

int main(void){
    union threeElements info = {.firstInt = -7, .secondInt = 10, .text = "c"};
    printf("Първо число: %i\nВторо число: %d\nТекст: %s\n", info.firstInt, info.secondInt, info.text);

return 0;
}
