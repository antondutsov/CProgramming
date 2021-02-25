/*
Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE:”
*/

#include <stdio.h>

#define MY_PRINT(...) printf("Датата на създаване на този файл е: " __VA_ARGS__)

int main(void){
    MY_PRINT(" %d/%d/%d \n", 25, 2, 21);

return 0;
}
