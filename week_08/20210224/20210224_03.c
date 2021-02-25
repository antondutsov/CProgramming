/*
Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG)
*/

#include <stdio.h>

void debugMessage(const char *ptrMessage){
#ifdef DEBUG
    printf("DEBUG: %s\n", ptrMessage);
#endif
}

int main(void){
    debugMessage("Здравей!");

return 0;
}
