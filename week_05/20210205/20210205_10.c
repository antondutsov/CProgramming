/*
Задача 9
Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s
*/

#include <stdio.h>
#include <string.h>

void mystrncpy(char *s, char *t, int n){
    int i = 0, j = 0;
    while(s[i] != '\0'){

        for (j; j<n; j++, i++){
            s[i] = t[j];
        }
        s[i] = '\0';
    }

    printf("%s \n", s);
}
int main(){
    char s[] = "mallo";
    char t[] = "cate";

    mystrncpy(s, t, 3);

return 0;
}
