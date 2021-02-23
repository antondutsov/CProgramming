/*
Задача 9.
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.
*/

#include <stdio.h>
#include <string.h>

union tagMyVar{
    int m_nValue;
    char m_szValue[31];
    union tagMyVar* puniNext;
};

int main (void){
    union tagMyVar uniVar = {0};
    union tagMyVar* puniVal = &uniVar;

    uniVar.m_nValue= 99;
    
    printf("Изход: %s \n",puniVal->m_szValue);

return 0;
}
