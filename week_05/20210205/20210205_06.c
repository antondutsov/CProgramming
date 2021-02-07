/*
Задача 6.
Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.
*/

#include <stdio.h>

char* myStrcat (char* s, char* t);
void pointerMyStrcat(char *s, char *t);

int main(void){
    char str1[] = {'M','a','l','l','o','\0'};
    char str2[] = {'A','l','l','o','c','\0'};
    printf("%s ",myStrcat(str1, str2));

return 0;
}

void pointerMyStrcat(char *s, char *t) {

    for(;*s;s++)

    while((*s++=*t++)){
         ;
    }

    for(;*t;t++){

        printf("%c", *t);
    }
}

char* myStrcat(char *s,char *t){
    char * p = s;
    while(*s)
        s++;
    while((*s=*t)!='\0'){
        s++;
        t++;
    }
    *s = '\0';

return p;
}
