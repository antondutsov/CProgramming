/*
Задача 13.
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
*/

#include <stdio.h>
#include <string.h>

union example{
    unsigned short a:6;
    char b:6;
};
int main (void){
    union example ex = {36};
    
    printf("%d \n %c \n", ex.a, ex.b);

return 0;
}
