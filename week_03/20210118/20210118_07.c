#include <stdio.h>

int main(){

    int nA = 0;
    int nB = 0;
    scanf("%d", &nA);
    scanf("%d", &nB);
    int nC = ( nA == nA ? nB : nC ); /* сравнява число */

    printf(" A value is %d \n", nA);
    printf(" B value is %d \n", nB);
    printf(" По-голямото число е: %d \n", nC);

 return 0;
 }
