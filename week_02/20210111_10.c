#include <stdio.h>

int main(){
    int index = 248;
    int place = 3;
    int value = 197;

    index = index >> place;

    value &= index;

    printf("%d", value);


return 0;
}
