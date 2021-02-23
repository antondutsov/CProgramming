/*
Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.
*/



#include <stdio.h>

struct date{
    int year;
    int month;
    int day;
};

int isLeapYear(int year){
    return((year%4==0) && (year%100!=0) || (year%400==0));
}

int Valid(struct date *validDate){
    if(validDate->year>9999 || validDate->year<1900){
        return 0;
    }
    if(validDate->month<1 || validDate->month>12){
        return 0;
    }
    if (validDate->day < 1 || validDate->day > 31){
        return 0;
    }
    if (validDate->month == 2){
        if (isLeapYear(validDate->year))
            return (validDate->day <= 29);
        else
            return (validDate->day <= 28);
    }
    if (validDate->month == 4 || validDate->month == 6 ||
            validDate->month == 9 || validDate->month == 11)
        return (validDate->day <= 30);
    return 1;
}

int main(void){
    struct date date={0};
    int status=0;

    printf("Въведете година: ");
    scanf("%d",&date.year);
    printf("Въведете месец: ");
    scanf("%d",&date.month);
    printf("Въведете ден: ");
    scanf("%d",&date.day);

    status=Valid(&date);
    if(status!=1){
        printf("Въведете валидна година! \n");
    }else{
        printf("Валидна дата! \n");
    }

return 0;
}
