/*
а 13. Ако имаме символен низ char str[] = “HELLO”, заменете
всичките символи с главна буква със съответните символи с малка
буква.
*/

#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "HELLO";
    int i;
    printf("%s \n", str);

    for(i = 0; i <= strlen(str); i++){
        if(str[i]>=65 && str[i]<=90)
            str[i] = str[i]+32;
    }

    printf("%s \n", str);

return 0;
}
