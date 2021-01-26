/*
Задача 2
Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar();
*/

#include <stdio.h>

int main(){
int i;
    unsigned char c = getchar();
    int nl = 0;



    while(c != EOF){
        if(c == '\n'){
            getchar();
            nl++;
            printf("count of 'nl' is: %d \n", nl);
        }
    }


return 0;
}
