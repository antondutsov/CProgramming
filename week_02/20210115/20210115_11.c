/*
11. Ако имаме символен низ от символа char str[] = “Hello”;
копирайте всеки един от неговите символи в низ, който да изглежда
огледален на него. Ето така char rts[] = “ollaH”; и принтирайте
резултата.
*/

#include <stdio.h>

int main(){

    char str[] = "Hello", rts[6];
    int start, end, place = 0;

    printf("%s \n", str);

    while (str[place] != '\0')
        place++;

        end = place - 1;

    for (start = 0; start < place; start++){
        rts[start] = str[end];
        end--;
    }

    rts[start] = '\0';

    printf("%s \n", rts);

    return 0;

}
