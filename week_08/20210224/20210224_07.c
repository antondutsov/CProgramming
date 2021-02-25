/*
Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти.
*/

#include <stdio.h>

#ifndef headerFile_h
#define headerFile_h printf("Header was defined!");
#endif

int main(void){
    headerFile_h;

return 0;
}
