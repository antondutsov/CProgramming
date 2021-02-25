/*
Напишете макрос, който прави идентификатор на низ (стринг)
*/


#include <stdio.h>

#define MYSTR(x) #x

int main(void){
    int value1 = 1;
    printf(MYSTR(value1));
    printf("\n");
    char str[] = "Здравей, стринг!";
    printf(MYSTR(str));
    printf("\n");
    printf(MYSTR("Здравей стринг"));
    printf("\n");
    printf(MYSTR(1));

return 0;
}
