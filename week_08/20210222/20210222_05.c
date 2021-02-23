/*
Задача 5.
Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор.
*/

#include <stdio.h>
#include <string.h>

struct date{
    int day;
    int month;
    int year;
};

int main(){
    struct date arr[10] =
    {
        {1, 3, 2112},
        {3, 4, 2119},
        {23, 12, 2227},
        {29, 9, 2230},
        {7, 4, 2233},
        {24, 2, 2305},
        {6, 5, 2332},
        {2, 10, 2335},
        {16, 3, 2336},
        {6, 4, 2367},
    };
                                                   
    for(int i = 0; i < 10; i++){
        printf("Въведена дата в структурата: \t%02i.%02i.%2i \n", arr[i].day, arr[i].month, arr[i].year);
    }

return 0;
}
