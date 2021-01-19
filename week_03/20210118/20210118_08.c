#include <stdio.h>

char isLetter();

int main(){

    isLetter();

return 0;
}

char isLetter(){
    char letter;

    printf("Въведете буква: ");

    scanf("%c", &letter);

    if((letter >=65 && letter <= 90) || (letter >= 97 && letter <= 122)){
        printf("Въведеният знак '%c' e валидна буква от азбуката! \n", letter);
    }
    else{
        printf("Въведеният знак не е буква!\n");
    }
return letter;
}
