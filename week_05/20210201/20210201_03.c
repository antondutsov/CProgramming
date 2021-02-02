/*
Задача 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата.
*/


#include<stdio.h>
#include<string.h>

double atof();

int main(void){
    char str[] = "345.6789";

    printf("\nThe String: %lf", atof(str));

    return 0;

}

double atof(char str[]){


    char str2[16];




    double fValue, power;
    int i = 0;
    int j = 0;
    for(i; i<=strlen(str); j++;){
        if(str[i] != ' ' && str[i] != '-'){
            str[j]++;
            str2[i] = str[j];
            i++;
        }
    }
    for(fValue == 0.0; isdigit(str[i]); i++){
        fValue = 10.0 * fValue + (str[i] - '0');
    }


    if(str[i] == '.'){ i++; }


    for(power = 1.0; isdigit(str[i]); i++){
        fValue = 10.0 * fValue + (str[i] - '0');
        power *= 10;
    }

    return fValue/power;
}
