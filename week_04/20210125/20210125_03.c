/*
Задача 3
Напишете програма, която преброява шпациите, табулациите и
новите редове.
*/


#include <stdio.h>

int main(){
    char c = 0;
    int cSp = 0, cTb = 0, cNl = 0;


    while((c = getchar()) != EOF){
        if(c == '\n'){
            cNl++;
        }
        else if(c == '\t'){
            cTb++;
        }
        else if(c == ' '){
            cSp++;
        }
    }

    printf("count of 'spaces' is: %d \n", cSp);
    printf("count of 'tabs' is: %d \n", cTb);
    printf("count of 'new lines' is: %d \n", cNl);


return 0;
}
