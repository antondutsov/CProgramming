/* 
Задача 14
Решете задачата за генериране на 6 буквена парола с
пойнтери.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASS 7

int main(void){


    char password[PASS];
    char *p = password;
  
    srand(time(0));
  
    char choice;

    while (choice != 'y'){
        while(p != &password[6]){
            *p = ((rand()%26) + 97);
                p++;
        }
        
        printf("Това е новата Ви парола: %s\n", password);
        printf("Ако желаете да я използвате натиснете: 'y'!\nАко желаете друга парола натиснете бутон!");

        fflush(stdin);
        scanf("%c", &choice);

        if(choice != 'y'){
            p = password;
        }
    }

return 0;
}
