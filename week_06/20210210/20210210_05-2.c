/*
Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
*/

#include <stdio.h>

void sort(int a[], int n){
    int *p, *q, temp;
    for ( p = a; p < a + n - 1; ++p ){
        for ( q = p + 1; q < a+n; ++q ){
            if ( *p > *q ){
                temp = *p;
                *p = *q;
                *q = temp;
            }
        }
    }
}
int main(){
    int a[10] = {3,5,8,12,23,45,19};
    sort(a,10);
    for(int i=0;i<10;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
