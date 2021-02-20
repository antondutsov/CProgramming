/*
Задача 9. Направете функця add(), която събира две точки
*/

#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};


struct point add(struct point a, struct point b){
    struct point c = {a.x + b.x, a.y + b.y};
    return c;
}

int main(void){
    int xA, yA, xB, yB;

    printf("Въведете координати за точка: 'a'");
    
    printf("\nX a = ");
    scanf(" %d", &xA);
    
    printf("Y a = ");
    scanf(" %d", &yA);

    printf("\nВъведете координати за точка: 'b'");
    
    printf("\nX b = ");
    scanf(" %d", &xB);
    
    printf("Y b = ");
    scanf(" %d", &yB);

    struct point a = {xA, yA};
    struct point b = {xB, yB};

    struct point c = add(a, b);

    printf("\nТочка a(%d,%d)\n", a.x, a.y);
    printf("Точка b(%d,%d)\n", b.x, b.y);
    printf("Точка c(%d,%d)\n\n", c.x, c.y);
    
return 0;
}
