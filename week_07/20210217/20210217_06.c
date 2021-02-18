/*
Задача 6.
Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";
*/

#include <stdio.h>

int CountCharacters (char *String, char* Searched);

int main(){
    char String[80] ={'a'};
    char SearcheFor ='a';
    int Occurancies = 0;

    printf("Моля, въведете текст не по-дълъг от 80 знака: \n");
    fgets(String, sizeof String, stdin);
    printf("\n\nВие въведохте: \n%s", String);

    printf("Каква буква търсите? \n");
    scanf("%c", &SearcheFor);

    Occurancies = CountCharacters(String, &SearcheFor);
    printf("Буквата %c е намерена %d пъти в изречението!\n", SearcheFor, Occurancies);
}

int CountCharacters (char *String, char *Searched){
    int CharacterCounter = 0;

    for (String; *String; String++){
        if((*String) == (*Searched)){
            CharacterCounter++;
        }
    }
    return CharacterCounter;
}
