/*
Задача 17. Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[]= "String for copy.\0";
    char str3[]= "Copied string!\0";
    char str2[30];
    char str4[30];

    strcpy(str2, str1);
    strcpy(str4, str3);
    printf("%s\n", str2);
    printf("%s\n", str4);
 
return 0;
}
