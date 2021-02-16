/*
12. Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW (10)
#define COL (10)
#define DEPT (10)

int main(){
    srand(time(0));

    int a[ROW][COL][DEPT];
    int *p = (int*)a;
    
    int size = sizeof(a)/sizeof(int);

    double sum = 0;
    for(; p<=&a[ROW-1][COL-1][DEPT-1]; p++){
            sum += (*p = rand()% 100 +1);
    }
    double avr = sum/size;
    printf("%f\n", avr);

return 0;
}
