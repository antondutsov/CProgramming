/*
Задача 1
Пребройте символите, подавани на конзолата, с функцията
getchar();
*/

#include <stdio.h>

int main(){
int i;
    unsigned char c;
    int nc = 0, nl = 0;
    c = getchar();


    while(c != EOF){
        if(c = getchar()){
            getchar();
            nc++;
            printf("%d\n", nc);
        }
   }



return 0;
}
