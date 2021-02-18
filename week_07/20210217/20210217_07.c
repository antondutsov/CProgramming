/*
Задача 7.
Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. 
*/

#include <stdio.h>
#include <ctype.h>

int* countAlphabet(int *, char*);
int checkAlphabet(char*);
int* initAlphabet(int*);

int main(int argc, char const *argv[]){
    char string[100];
    int alphabet[26];

    initAlphabet(alphabet);

    printf("Въведете текст :");
    scanf(" %[^ \n]", string);

    countAlphabet(alphabet, string);
    for (int i = 0; i < 26; i++){
        printf("%c : %d\n", i+65, alphabet[i]);
    }
    
return 0;
}

int* countAlphabet(int *alphabet, char* string){
    while (*string){
        if (checkAlphabet(string)){
            alphabet[toupper(*string) - 65]++;
        }
        string++;
    }
    
return alphabet;
}

int checkAlphabet(char* alphabet){
    if ((*alphabet>='a' && *alphabet<='z') || (*alphabet>='A' && *alphabet<='Z')){
        return 1;
    }
    
return 0;
}

int* initAlphabet(int* alphabet){
    for (int i = 0; i < 26; i++){
        alphabet[i] = 0;
    }
return alphabet;
}
