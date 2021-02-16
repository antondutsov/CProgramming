/*
    13. Напишете програма, която намира дължината на стринг с пойнтер! (без да използва length());
*/

#include <stdio.h>

int main(){
    char Array[] = "Hello darknes, my old friend!";
    char *Pointer = Array;
    int Counter = 0;

    while(*Pointer){
        Pointer++;
        Counter++;
    }

    printf("\nThe string:\n");
    printf("%s\n", Array);
    printf("is %d characters long \n", Counter);
    
return 0;
}
