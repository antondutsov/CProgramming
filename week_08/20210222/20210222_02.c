/*

*/

#include <stdio.h>
#include <string.h>

enum tagEType {VALUE_INT, VALUE_STR};

union tagMyVar{
    int m_nValue;
    char m_szValue[31];
};

struct tagMyValue {
    enum tagEType m_type;
    union tagMyVar m_var;
};

void printValue(struct tagMyValue* pValue){
    if (VALUE_INT == pValue->m_type){
        printf("int: %d \n", pValue->m_var.m_nValue);
    } 
    else if (VALUE_STR == pValue->m_type){
        printf("str: %s \n", pValue->m_var.m_szValue);
    }
}

int main(void){
    struct tagMyValue value = {VALUE_INT, 2115};
    printValue(&value);
    value.m_type = VALUE_STR;
    strcpy(value.m_var.m_szValue, "Текст");
    printValue(&value);

return 0;
}
