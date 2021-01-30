/*
Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични
*/

#include <stdio.h>

int decToBin();

int main(){
    int dec = 4;
    int rez = decToBin(dec);

return 0;
}

int decToBin(int dec){
    int binaryNum[32];
    int i = 0;

    printf("Enter decimal integer: ");
    scanf("%d", &dec);

    while(dec > 0){
        binaryNum[i] = dec % 2;
        dec = dec / 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binaryNum[j]);
    }

}
