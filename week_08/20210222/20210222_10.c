/*
Задача 10.
Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.
*/

#include <stdio.h>
#include <string.h>

enum EType{
    VALUE_INT,
    VALUE_STR
};

union Union{
    int number;
    char str[31];
};

struct tagMyValue{
    enum EType m_type;
    union Union m_var;
};

void printValue(struct tagMyValue *pValue){
    if (VALUE_INT == pValue->m_type){
        printf("VALUE_INT: %d\n", pValue->m_var.number);
    }
    else if (VALUE_STR == pValue->m_type){
        printf("VALUE_STR: %s\n", pValue->m_var.str);
    }
}

int main(){
    struct tagMyValue value = {VALUE_INT, 1401};
    printValue(&value);
    value.m_type = VALUE_STR;
    strcpy(value.m_var.str, "new_structure");
    printValue(&value);

return 0;
}
