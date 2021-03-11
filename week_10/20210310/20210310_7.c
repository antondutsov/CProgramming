/*
Задача 7
Напишете програма, която обработва Ctrl+C,Ctrl+D, Ctrl+Z
*/

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void sleep(int);
void ctrlc_handler(int iUnused) {
    printf("\nCtrl + C\n");
    exit(EXIT_FAILURE);
}
void ctrld_handler(int iUnused) {
    printf("\nCtrl + D\n");
    exit(EXIT_FAILURE);
}
void ctrlz_handler(int iUnused) {
    printf("\nCtrl + Z\n");
    exit(EXIT_FAILURE);
}
int main(void) {
    char s[20];
    signal(SIGINT, ctrlc_handler);
    

return 0;
}