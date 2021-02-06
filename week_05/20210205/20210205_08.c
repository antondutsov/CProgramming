/*
Задача 9
Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено
*/

#include <stdio.h>

int strend(char *s, char *t);

int main() {
    char str1[] = "mallocation";
    char str2[] = "cation";

    printf("%d \n", strend(str1, str2));

return 0;
}

int strend(char *s, char *t) {
    while (*s++) {
        if (*t == *s) {

            while ((*s++ == *t++) && (*t != '\0'));

            if (*s == '\0' && *t == '\0'){
                return 1;
            }
        }
    }
}
