/*

*/

#include <stdio.h>

union tagMyData {
    int m_nValue;
    float m_fValue;
    char m_szText[31];
};

int main(void){
    union tagMyData data = {19};
    printf("Размер на паметта : sizeof(data) : %d \n", sizeof(data));
    printf("nValue: %вd, fValue: %f, Текст: %s \n",data.m_nValue, data.m_fValue, data.m_szText);

return 0;
}
