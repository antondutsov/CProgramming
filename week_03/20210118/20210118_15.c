#include <stdio.h>

int main(){
    int nA;
    printf("Enter value for 'A': ");
    scanf("%d", &nA);

    int nB = ( nA != 0 ? 2 : 0 ); /* сравнява число */

    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

    //сравнение на двете стойности и намиране на по-голямото

    int comparison = nA > nB ? printf("The greater Value is: 'A' - %d \n", nA) : printf("The greater Value is: 'B' - %d \n", nB);

return 0;
}
