/*
16.Направете същото, както в задача 15, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[]= "String for copy.";
    char str3[]= "Copied string!";
    char str2[]="";
    char str4[]="";

    strcpy(str4, str1);

    printf("%s\n",str4);
    
return 0;
}
