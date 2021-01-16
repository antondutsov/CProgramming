#include <stdio.h>

extern int g_Value; /* global variable declaration */

int main(){

    printf("Global variable = %d \n", g_Value);


    return 0;
}

int g_Value = 20210115; /* global variable definition */
