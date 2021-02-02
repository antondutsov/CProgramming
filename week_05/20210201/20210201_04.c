/*
Задача 4. Направете функцията :
void copy(char *to, char *from), която копира една
последователност от символи в друга. Декларирайте масива,
който ще копирате така char *from = "abcdef" или така char from[]
= "abcdef" това е едно и също. Първото е пойнтер, сочещ към
низова константа, второто е началото на масив, сочещ към нея.
Заделете място за масива, в който ще копирате тези символи с
декларация char to[16]; Копирайте символ по символ масива from[] в to[],
докато не стигнете знака '\0' терминираща нула – знак за край на
стринг. Терминиращият символ '\0' има стойност 0.
*/

#include <stdio.h>


void copy(char *to, char *from){
    int index = 0;
    int lenght = 0;

    while(from[lenght] != '\0'){
        lenght++;
    }

    lenght--;

    for(lenght; lenght >= 0; lenght--){
        to[index] = from[lenght];
        printf("%c", to[index]);
        index++;
    }

}

int main(){
    char from[] = "abcdef";
    char to[16];
     copy(to, from);

return 0;
}
