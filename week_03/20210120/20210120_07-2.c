/*
Задача 7.2. Пренапишете предишното упражнение като вместо ifelse-if конструкцията използвайте switch-case .
*/

#include <stdio.h>

int main(){
    printf("Press 1 to see message Hello \n");
    printf("Press 2 to see Poem \n");
    printf("Press 3 to see hidden message \n");

    int choice;
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Hello!");
            break;
        case 2:
            printf("The salad does not fret if is not a venegret! \n");
            break;
        case 3:
            printf("The secret message is: '42' \n");
            break;
        default:
            printf("The choice is not in scope! \n");
            break;
        }


    }
