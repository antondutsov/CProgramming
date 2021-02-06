

#include <stdio.h>

void printStr(char *s){
    for(int i = 0; s[i] != '\0'; i++){
        printf("%c\n", s[i]);
    }
}

int main(){
    char cArr[] = {'H', 'e', 'l', 'l', '\0', 'o'};

    printStr(cArr);

return 0;
}
