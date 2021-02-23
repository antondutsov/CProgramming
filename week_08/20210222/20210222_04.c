/*
Задача 4.
Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.
*/


#include <stdio.h>
#include <string.h>

struct date{
    int day;
    int month;
    int year;
};

int main(){
    struct date contractdate = {15, 12, 2020};
    struct date contractdate2;
    contractdate2.day = 15;
    contractdate2.month = 12;
    contractdate2.year = 2020;
    
    printf("%d, %d, %d \n", contractdate2.day, contractdate2.month, contractdate2.year);

return 0;
}
