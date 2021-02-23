/*
Задача 8.
Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.
*/


#include <stdio.h>
#include <string.h>

union tagMyVar{
    int m_nValue;
    char m_szValue[31];
    union tagMyVar* puniNext;
};

int main (void){
    union tagMyVar uniVar={0};
    union tagMyVar* puniVal=&uniVar;
    
    strcpy(puniVal->m_szValue,"681");

    printf("Изход: %s \n",puniVal->m_szValue);

return 0;
}
