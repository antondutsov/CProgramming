/*
Задача 11.
Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции. 
*/

#include <stdio.h>
#include <stdlib.h>

void PassGen(char *PassString);
char Password [12] = {'s'};

int main(){
    char choice = 'n';
    void (*PasswordGenerator)(char *) = PassGen;

    while(choice != 'y'){
        PasswordGenerator(Password);

        printf("Новата Ви парола е: \n");
        for (int i = 0; i < 18; i++){
            printf("%c", Password[i]);
        }

        printf("\nНатиснете бутон различен от 'y', за да генерирате нова парола! \n");
        scanf("%c", &choice);
    }

return 0;
}

void PassGen(char *PassString){
    for (int i = 0; i < 18; i++){
        PassString[i] =  33 + rand()%89;
    }
}
