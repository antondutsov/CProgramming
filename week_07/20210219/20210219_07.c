/*
Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.
*/


#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};
struct point makepoint(int x, int y){
    struct point point = {x, y};
    return point;
}

int main(int argc, char *argv[]){

    struct point a = makepoint(3, 7);
    struct point b = makepoint(4, 10);
    printf("Координатите на точка А са: x=%d , y=%d\n", a.x, a.y);
    printf("Координатите на точка В са: x=%d , y=%d", b.x, b.y);

return 0;
}
